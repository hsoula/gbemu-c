cmake_minimum_required(VERSION 4.3)
project(gbemu_c C)

set(CMAKE_C_STANDARD 11)

add_executable(gbemu_c main.c
        common.h
        cpu.c
        cpu.h)
