cmake_minimum_required(VERSION 4.0)
project(who_likes_it C)

set(CMAKE_C_STANDARD 11)

add_executable(who_likes_it main.c
        who_likes_it.c
        who_likes_it.h)
