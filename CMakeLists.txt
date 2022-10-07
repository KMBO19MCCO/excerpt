cmake_minimum_required(VERSION 3.22)
project(excerpt)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_library(excerpt SHARED excerpt.cpp)
