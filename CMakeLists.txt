cmake_minimum_required(VERSION 3.21)
project(CPL_2021 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(0-intro)
add_subdirectory(1-types-io)

#add_executable(CPL_2021 hello.c)
add_executable(hello 0-intro/hello.c)
add_executable(guess 0-intro/guess.c)

add_executable(circle 1-types-io/circle.c)