cmake_minimum_required(VERSION 3.16)

project(Calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Calculator
    src/main.cpp
    src/calculator.cpp
)

target_include_directories(Calculator PRIVATE include)