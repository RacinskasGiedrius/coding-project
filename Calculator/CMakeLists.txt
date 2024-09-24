cmake_minimum_required(VERSION 3.29)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculator
        src/calculatorFunctionality.cpp
        src/calculatorDesign.cpp
        src/calculator.cpp
        "src/helperFunctions.cpp"
        "include/helperFunctions.h")
