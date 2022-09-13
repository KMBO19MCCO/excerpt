include_directories(${excerptTest_SOURCE_DIR}/example/inc)
# I assume you want to use LibProject as a library in MainProject.
include_directories(${excerptTest_SOURCE_DIR}/excerptlib/inc)
link_directories(${excerptTest_SOURCE_DIR}/excerptlib/src)
add_executable(excerptTest test.cpp)
target_link_libraries(excerptTest excerptlib)