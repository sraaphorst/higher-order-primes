/**
 * prime_calculator.h
 *
 * By Sebastian Raaphorst, 2019.
 */

#pragma once

#include <algorithm>
#include <array>
#include <iterator>

#include "const_math.h"

namespace primes {
/**
 * Goals:
 * 1. Given any number, determine its c and k.
 * 2. Given any number, determine its chain.
 * To determine the index of a prime number, we can use the Sieve of Eratosthenes.
 */
    template<size_t N>
    class prime_calculator {
        using sieve = std::array<bool, N>;
    public:
        sieve m_sieve;

    public:
        constexpr prime_calculator() noexcept;
    };

    template<size_t N>
    constexpr prime_calculator<N>::prime_calculator() noexcept: m_sieve{sieve{}} {
        static_assert(N > 2);
        m_sieve[0] = m_sieve[1] = false;

        // std::fill is not constexpr. Argh.
        for (size_t i = 2; i < N; ++i)
            m_sieve[i] = true;

        // Start knocking things off at p^2.
        // We don't have to worry about 2p, 3p, 4p, (p-1)p because those will have already been knocked off by
        // 2, 3, 4, (p-1).
        // We can also stop at the square root of n.
        auto upper_bound = static_cast<size_t>(const_math::const_sqrtd(N));

        for (size_t p = 2; p <= upper_bound; ++p) {
            if (!m_sieve[p]) continue;

            for (size_t multiple = p * p; multiple < N; multiple += p)
                m_sieve[multiple] = false;
        }
    }
}