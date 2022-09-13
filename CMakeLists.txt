cmake_minimum_required(VERSION 3.22)
project(excerptTest)
set(CMAKE_CXX_STANDARD 23)
set(LIBDIR ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIBDIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIBDIR})


add_subdirectory(example)
add_subdirectory(excerpt)
