cmake_minimum_required(VERSION 3.22)
project(excerptTest)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_compile_options(-std=c++20)

add_subdirectory(example)
add_subdirectory(excerpt)
