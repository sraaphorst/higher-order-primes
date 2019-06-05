cmake_minimum_required(VERSION 3.14)
project(higher_order_primes)

set(CMAKE_CXX_STANDARD 17)
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Wno-narrowing -ftemplate-depth=10000 -fconstexpr-depth=2000 -std=c++17 -g)
endif()

include_directories(
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/src/impl"
)

include_directories(src)
add_subdirectory(src)

add_executable(main main.cpp)
target_link_libraries(main prime)