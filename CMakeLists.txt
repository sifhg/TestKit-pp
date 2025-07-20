cmake_minimum_required(VERSION 3.28)
project(test_executable)

set(CMAKE_CXX_STANDARD 20)
include_directories(includes/utils)

add_executable(test_executable test_executable/main.cpp)

add_library(Test STATIC includes/Test.cpp)

add_library(TestUtilities STATIC includes/utils/TestUtilities.cpp)

target_link_libraries(test_executable Test TestUtilities)