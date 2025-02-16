cmake_minimum_required(VERSION 3.10)

add_subdirectory(googletest)

include_directories(../src)

add_executable(run_tests ../src/add.h test_add.cpp)

target_link_libraries(run_tests gtest gtest_main)

add_test(NAME AddTests COMMAND run_tests)