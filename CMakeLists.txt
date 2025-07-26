cmake_minimum_required(VERSION 3.28)
project(test_executable)

set(CMAKE_CXX_STANDARD 20)

add_executable(test_executable test_executable/main.cpp)

add_subdirectory(include/TestKit)

target_link_libraries(test_executable TestKit)