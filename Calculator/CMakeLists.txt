cmake_minimum_required(VERSION 3.29)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculator
        calculatorFunctionality.cpp
        calculatorDesign.cpp
        calculator.cpp
        helperFunctions.cpp
        helperFunctions.h)
