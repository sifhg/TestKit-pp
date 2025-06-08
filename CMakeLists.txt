cmake_minimum_required(VERSION 3.31)
project(test_executable)

set(CMAKE_CXX_STANDARD 20)

add_library(TestKit)
target_sources(
    TestKit
    PUBLIC
    FILE_SET CXX_MODULES FILES
    modules/TestKit/Test.cpp
)

add_executable(test_executable test_executable/main.cpp)
target_link_libraries(test_executable TestKit)
