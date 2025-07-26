set(CMAKE_CXX_STANDARD 20)
include_directories(include/TestKit/utils)

add_library(TestKit STATIC Test.cpp)

add_library(TestUtilities STATIC utils/TestUtilities.cpp)

target_link_libraries(TestKit TestUtilities)