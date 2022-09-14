# I assume you want to use LibProject as a library in MainProject.
include_directories(../inc)
include_directories(${excerptTest_SOURCE_DIR}/excerpt/inc)
link_directories(../src)
add_executable(excerptTest test.cpp)
target_link_libraries(excerptTest excerpt)
