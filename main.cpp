#include <iostream>

#include <prime_calculator.h>
#include <const_math.h>

int main() {
    constexpr primes::prime_calculator<10000> pc{};
}