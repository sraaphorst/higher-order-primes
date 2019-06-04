/**
 * prime_calculator.h
 *
 * By Sebastian Raaphorst, 2019.
 */

#pragma once

#include <array>

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
        prime_calculator() noexcept;
    };
}