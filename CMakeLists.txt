cmake_minimum_required(VERSION 3.20)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithms driver_code.cpp sorting/headers/sorting.h sorting/src/sorting.cpp number/src/prime_checker.cpp number/headers/prime_checker.h number/headers/number.h it1_36.h utility/headers/array_handler.h utility/headers/utility.h utility/src/array_handler.cpp)
