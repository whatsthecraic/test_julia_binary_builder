cmake_minimum_required(VERSION 3.21)
project(test_julia_binary_builder)

set(CMAKE_CXX_STANDARD 17)


add_library(test_julia_binary_builder SHARED library.cpp)

# OpenSSL
find_package(OpenSSL 1.0 REQUIRED)
target_link_libraries(test_julia_binary_builder ${OPENSSL_LIBRARIES})

install(TARGETS test_julia_binary_builder LIBRARY RUNTIME)