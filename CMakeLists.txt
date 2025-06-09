cmake_minimum_required(VERSION 3.31)
project(test_executable)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(modules/TestKit)

add_executable(test_executable test_executable/main.cpp)
target_link_libraries(test_executable TestKit)