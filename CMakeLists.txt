cmake_minimum_required(VERSION 3.21)
project(test_julia_binary_builder)

set(CMAKE_CXX_STANDARD 17)

add_library(test_julia_binary_builder SHARED library.cpp)
