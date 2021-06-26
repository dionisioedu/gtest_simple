cmake_minimum_required(VERSION 3.14)
set(Name Example)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(${Name})
enable_testing()

set(Headers Example.hpp)
set(Sources Example.cpp)

add_library(${Name} STATIC ${Sources} ${Headers})

add_subdirectory(googletest)
add_subdirectory(Tests)