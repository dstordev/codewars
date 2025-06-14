cmake_minimum_required(VERSION 4.0)
project(weird_string_case C)

set(CMAKE_C_STANDARD 11)

add_executable(weird_string_case main.c
        weird_string_case.c
        weird_string_case.h)
