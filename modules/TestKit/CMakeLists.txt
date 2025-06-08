cmake_minimum_required(VERSION 3.31)
project(TestKit)

add_library(
    TestKit STATIC
    Test.cpp
    utils/TestCompletion.cpp
)

target_include_directories(
    TestKit PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/utils
)