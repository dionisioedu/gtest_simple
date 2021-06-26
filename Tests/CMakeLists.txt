cmake_minimum_required(VERSION 3.14)
set(Name ExampleTests)
set(Sources ExampleTests.cpp)

cmake_policy(SET CMP0079 NEW)

enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(${Name} ${Sources})

target_link_libraries(
    ExampleTests
    Example
    gtest_main)

gtest_discover_tests(${Name})