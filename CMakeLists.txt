cmake_minimum_required(VERSION 3.10)
project(ProjectName)

set(CMAKE_CXX_STANDARD 11)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

enable_testing()

add_executable(countingSort_test 3rd\ year/countingSort_test.cpp)
target_link_libraries(countingSort_test gtest gtest_main)

add_test(NAME countingSortTest COMMAND countingSort_test)