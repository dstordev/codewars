cmake_minimum_required(VERSION 4.0)
project(greed_is_good C)

set(CMAKE_C_STANDARD 11)

add_executable(greed_is_good main.c
        greed_is_good.c
        greed_is_good.h)
