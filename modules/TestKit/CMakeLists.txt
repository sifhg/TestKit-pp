include_directories(utils)

add_library(TestCompletion STATIC utils/TestCompletion.cpp)

add_library(TestKit)
target_sources(
    TestKit
    PUBLIC
    FILE_SET CXX_MODULES FILES
    Test.cpp
)

target_link_libraries(TestKit TestCompletion)