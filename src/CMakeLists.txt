# CMakeLists.txt
# By Sebastian Raaphorst, 2019.

project(prime VERSION 0.1.0 LANGUAGES CXX)

add_library(primes SHARED
        const_math.cpp)
