cmake_minimum_required(VERSION 3.25)
project(shark C)

set(CMAKE_C_STANDARD 23)

add_executable(shark main.c classes_headers/divisibleby.c classes_headers/divisibleby.h classes_headers/quadratic.c classes_headers/quadratic.h classes_headers/primes.c classes_headers/primes.h classes_headers/primegen.c classes_headers/primegen.h classes_headers/factorial.c classes_headers/factorial.h)

target_link_libraries(shark m)