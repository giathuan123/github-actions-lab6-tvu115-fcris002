cmake_minimum_required(VERSION 3.1)

add_subdirectory(googletest)

add_executable(main ./src/main.cpp ./src/rectangle.cpp)
add_executable(test ./tests/test.cpp)

target_include_directories(main PRIVATE ./header)
target_include_directories(test PRIVATE ./header)

target_link_libraries(test gtest)
target_compile_definitions(test PRIVATE gtest_disable_pthread=ON)
