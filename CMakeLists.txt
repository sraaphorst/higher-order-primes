cmake_minimum_required(VERSION 3.14)

project(higher_order_primes)

set(CMAKE_CXX_STANDARD 17)
if (MSVC)
    add_compile_options(/W4)
else()
    # These settings allow us to generate 1,000,000 primes at compile time.
    add_compile_options(-Wall -Wextra -Wpedantic -Wno-narrowing -ftemplate-depth=10000
            -fconstexpr-depth=2000
            -fconstexpr-loop-limit=1000000
            -fconstexpr-ops-limit=200000000
            -std=c++17 -g)
endif()

include_directories(
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/src/impl"
)

include_directories(src)
add_executable(main main.cpp)
<<<<<<< HEAD
#target_link_libraries(main prime)
=======
>>>>>>> c00195bddcd6fb684c0f4dd9c2064d6461958bbc
