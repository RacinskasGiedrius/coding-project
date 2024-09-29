cmake_minimum_required(VERSION 3.29)
project(To_Do_list)

set(CMAKE_CXX_STANDARD 20)

add_executable(To_Do_list src/main.cpp
        src/taskFunctionality.cpp
        src/helperFunctions.cpp
        include/helperFunctions.h
        include/taskFunctionality.h)
