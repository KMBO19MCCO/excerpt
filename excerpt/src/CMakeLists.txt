# Notice name prefix of this variable, set by CMake according
# to value given with "project()" in the root CMakeLists.txt.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(../inc)
add_library(excerpt excerpt.cpp)
