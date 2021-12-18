cmake_minimum_required(VERSION 3.20)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithms driver_code.cpp utility/array_handler.cpp sorting/sorting.h sorting/sorting.cpp)
