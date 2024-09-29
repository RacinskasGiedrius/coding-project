cmake_minimum_required(VERSION 3.29)
project(Calculator)

set(CMAKE_CXX_STANDARD 20)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(Calculator
        src/calculatorFunctionality.cpp
        src/calculatorDesign.cpp
        src/calculator.cpp
        src/helperFunctions.cpp)


target_link_libraries(Calculator ${GTEST_LIBRARIES} pthread)

add_executable(runTests
        tests/testCalculation.cpp)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

add_test(NAME CalculatorTests COMMAND runTests)