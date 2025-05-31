cmake_minimum_required(VERSION 3.10)
project(lab6)
set(CMAKE_CXX_STANDARD 17)

include_directories(program)

add_library(lab STATIC program/Lab.cpp)
add_executable(main program/program.cpp)
target_link_libraries(main lab)

find_package(GTest REQUIRED)
add_executable(test_lab Test_lab/test.cpp)
target_link_libraries(test_lab lab GTest::gtest GTest::gtest_main pthread)
