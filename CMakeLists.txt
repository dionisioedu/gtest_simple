cmake_minimum_required(VERSION 3.14)
set(Name Example)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(${Name})
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

set(Headers Example.hpp)
set(Sources Example.cpp)

add_library(${Name} STATIC ${Sources} ${Headers})

add_subdirectory(Tests)