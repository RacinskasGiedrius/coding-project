#include "calculatorFunctionality.h"
#include "../Design/calculatorDesign.h"
#include "../Helper Functions/helperFunctions.h"
#include <iostream>
#include <cmath>
#include <iomanip>

std::string selectedOperator;
int userAction;
int num1 = 0;
int num2 = 0;
union {
    int intResult;
    double doubleResult;
} result;
bool isDoubleResult = false;

// Functionality added into one function to leave main less clustered;
void calculatorApp() {
    userInput();
    calculateResult();
    displayResult();
}

// Initial screen for the calculator;
void initiateCalculator() {
    welcomeDesign();
    body();
    std::cout << "[Select your action]\n";
    std::cin >> userAction;
    std::cout << std::endl;


    while (true) {
        if (userAction == 1) {
            clearScreen();
            break;
        }
        else if (userAction == 2) {
            exit(0);
        }
        else if (std::cin.fail() || (userAction != 1 && userAction != 2)) {
            handleInvalidInput();
            errorCommand();
            std::cout << "[Select your action]\n";
            std::cin >> userAction;
            std::cout << std::endl;
        }
    }
}

// Function to ask user input for the calculation;
void userInput() {
    calculateDesign();
    body();
    std::cout << "[Type in the first number below]\n";
    std::cin >> num1;
    std::cout << std::endl;


    // Handle if the first number is not an Integer;
    while (std::cin.fail()) {
        handleInvalidInput();
        errorNumber();
        std::cout << "[Type in the first number below]\n";
        std::cin >> num1;
        std::cout << std::endl;
    }

    std::cout << "[Type in the Operator (+, -, *, /) below]\n";
    std::cin >> selectedOperator;
    std::cout << std::endl;

    // Handle if Operator is invalid;
    while (selectedOperator != "+" && selectedOperator != "-" && selectedOperator != "/" && selectedOperator != "*") {
        clearScreen();
        errorOperator();
        std::cout << "[Type in the Operator (+, -, *, /) below]\n";
        std::cin >> selectedOperator;
        std::cout << std::endl;
    }

    std::cout << "[Type in the second number below]\n";
    std::cin >> num2;
    std::cout << std::endl;

    // Handle if the second number is not an Integer;
    while (std::cin.fail()) {
        handleInvalidInput();
        errorNumber();
        std::cout << "[Type in the second number below]\n";
        std::cin >> num2;
        std::cout << std::endl;
    }
}

// Function to calculate the user input;
void calculateResult() {
    if (selectedOperator == "+") {
        // int result = static_cast<int>(num1) + static_cast<int>(num2);
        result.intResult = num1 + num2;
        isDoubleResult = false;
    }
    else if (selectedOperator == "-") {
        result.intResult = num1 - num2;
        isDoubleResult = false;
    }
    else if (selectedOperator == "*") {
        result.intResult = num1 * num2;
        isDoubleResult = false;
    }
    else if (selectedOperator == "/") {
        // Handle division by 0;
        if (num2 == 0) {
            clearScreen();
            errorDivisionByZero();
            std::cout << "[Select your action]\n";
            std::cin >> userAction;
            while (userAction != 1) {
                clearScreen();
                errorDivisionByZero();
                std::cout << "[Select your action]\n";
                std::cin >> userAction;
            }
            clearScreen();
            calculatorApp();
        }
        else {
            result.doubleResult = static_cast<double>(num1) / static_cast<double>(num2);
            isDoubleResult = true;
        }
    }
}

// Display the result, separated from the design file due to additional logic needed;
void displayResult() {
    clearScreen();
    std::cout << "===============================\n";
    std::cout << "||";
    std::cout << std::setw(25) << std::right << (std::to_string(num1) + " " + selectedOperator + " " + std::to_string(num2));
    std::cout << "  ||\n";
    std::cout << "||";
    if (isDoubleResult) {
        if (result.doubleResult == static_cast<int>(result.doubleResult)) {
            std::cout << std::setw(25) << std::right << static_cast<int>(result.doubleResult);
        }
        else {
            std::cout << std::setw(25) << std::right << std::fixed << std::setprecision(2) << result.doubleResult;
        }
    }
    else {
        std::cout << std::setw(25) << std::right << result.intResult;
    }
    std::cout << "  ||\n";
    std::cout << "||    Continue [1] Exit [2]  ||\n";
    std::cout << "===============================\n";
    body();
}