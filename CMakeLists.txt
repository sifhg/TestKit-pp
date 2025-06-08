cmake_minimum_required(VERSION 3.31)
project(TestKit_pp)

set(CMAKE_CXX_STANDARD 20)

add_executable(TestKit_pp test_executable/main.cpp
    modules/TestKit/Test.cpp
)
