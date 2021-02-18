cmake_minimum_required(VERSION 2.8)

add_subdirectory(googletest)

add_executable(test ./tests/test.cpp ./src/rectangle.cpp)

target_include_directories(test PRIVATE ./header)

target_link_libraries(test gtest)
target_compile_definitions(test PRIVATE gtest_disable_pthread=OFF)
