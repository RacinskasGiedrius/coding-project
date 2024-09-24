cmake_minimum_required(VERSION 3.29)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculator
        Main/Functionality/calculatorFunctionality.cpp
        Main/Design/calculatorDesign.cpp
        Main/calculator.cpp
        "Main/Helper Functions/helperFunctions.cpp"
        "Main/Helper Functions/helperFunctions.h")
