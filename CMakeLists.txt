cmake_minimum_required(VERSION 3.22)
project(excerptTest)
set(CMAKE_CXX_STANDARD 23)

include_directories(include src)
add_executable(excerptTest src/example/test.cpp)
