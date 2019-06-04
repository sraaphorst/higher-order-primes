/**
 * prime_calculator.cpp
 *
 * By Sebastian Raaphorst, 2019.
 */

#include <algorithm>
#include <array>
#include <cmath>
#include <vector>

#include "prime_calculator.h"

namespace primes {
    primality_memoizer primality_calculator::m_primality_memoizer;
    prime_memoizer  primality_calculator::m_prime_memoizer;

    bool primality_calculator::is_prime(size_t candidate) {
        if (m_prime_memoizer.find(candidate) != m_prime_memoizer.cend())
            return true;

        auto bound = static_cast<size_t>(sqrt(candidate));
        for (size_t i = 2; i <= bound; ++i) {
            if (candidate % i == 0) {
                m_prime_memoizer[candidate] = false;
                m_primality_memoizer[candidate] = 0; // A composite has no parent.
                return false;
            }
        }
        m_prime_memoizer[candidate] = true;
        return true;
    }

    size_t prime_index(size_t candidate) {
        // This is a much more difficult operation. We want to find out the prime index of candidate.
        // If candidate is composite,
    }

    static void sieve(size_t max_candidates) {
        std::vector<bool> candidates;
        candidates.resize(max_candidates);
        std::fill(std::begin(candidates), std::end(candidates), true);

        // Initial conditions.
        candidates[0] = candidates[1] = false;
        for (size_t i = 2; i < max_candidates; ++i) {
            if (!candidates[i])
                continue;

            size_t multiple = i;
            while (i < max_candidates) {
                multiple += i;
                candidates[multiple] = false;
            }
        }
    }
}