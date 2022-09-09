cmake_minimum_required(VERSION 3.22)
project(excerptTest)
set(CMAKE_CXX_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/include)
link_libraries(${LIBDIR})
add_executable(excerptTest test.cpp)
