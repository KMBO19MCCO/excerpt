# Notice name prefix of this variable, set by CMake according
# to value given with "project()" in the root CMakeLists.txt.
include_directories(${excerptTest_SOURCE_DIR}/excerptlib/inc)
add_library(excerptlib excerpt.cpp)