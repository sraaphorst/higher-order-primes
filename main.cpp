#include <iostream>

#include <prime_calculator.h>

int main() {
    constexpr auto N = 1'000'000;
    constexpr primes::prime_calculator<N> pc{};

    size_t prime_number = 1;
    for (size_t i = 0; i < N; ++i)
        if (pc.m_sieve[i])
            std::cout << prime_number++ << ": " << i << '\n';
}