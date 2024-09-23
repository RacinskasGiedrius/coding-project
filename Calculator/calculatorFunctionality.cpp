#include "calculatorFunctionality.h"
#include "calculatorDesign.h"
#include "helperFunctions.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string selectedOperator = "";
string userAction = "";
int num1 = 0;
int num2 = 0;
int result = 0;

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
    cout << "[Select your action]\n";
    cin >> userAction;
    cout << endl;


    while (true) {
        if (userAction == "start") {
            clearScreen();
            break;
        }
        else if (userAction == "exit") {
            exit(0);
        }
        else {
            clearScreen();
            errorCommand();
            cout << "[Select your action]\n";
            cin >> userAction;
            cout << endl;
        }
    }
}

// Function to ask user input for the calculation;
void userInput() {
    calculateDesign();
    body();
    cout << "[Type in the first number below]\n";
    cin >> num1;
    cout << endl;


    // Handle if the first number is not an Integer;
    while (cin.fail()) {
        handleInvalidInput();
        cout << "[Type in the first number below]\n";
        cin >> num1;
        cout << endl;
    }

    cout << "[Type in the Operator (+, -, *, /) below]\n";
    cin >> selectedOperator;
    cout << endl;

    // Handle if Operator is invalid;
    while (selectedOperator != "+" && selectedOperator != "-" && selectedOperator != "/" && selectedOperator != "*") {
        clearScreen();
        errorOperator();
        cout << "[Type in the Operator (+, -, *, /) below]\n";
        cin >> selectedOperator;
        cout << endl;
    }

    cout << "[Type in the second number below]\n";
    cin >> num2;
    cout << endl;

    // Handle if the second number is not an Integer;
    while (cin.fail()) {
        handleInvalidInput();
        cout << "[Type in the second number below]\n";
        cin >> num2;
        cout << endl;
    }
}

// Function to calculate the user input;
void calculateResult() {
    if (selectedOperator == "+") {
        result = num1 + num2;
    }
    else if (selectedOperator == "-") {
        result = num1 - num2;
    }
    else if (selectedOperator == "*") {
        result = num1 * num2;
    }
    else if (selectedOperator == "/") {
        // Handle division by 0;
        if (num2 == 0) {
            clearScreen();
            errorDivisionByZero();
            cout << "[Select your action]\n";
            cin >> userAction;
            while (userAction != "C") {
                clearScreen();
                errorDivisionByZero();
                cout << "[Select your action]\n";
                cin >> userAction;
            }
            clearScreen();
            calculatorApp();
        }
        else {
            result = num1 / num2;
        }
    }
}


// Display the result, separated from the design file due to additional logic needed;
void displayResult() {
    clearScreen();
    cout << "===============================\n";
    cout << "||";
    cout << setw(25) << right << (to_string(num1) + " " + selectedOperator + " " + to_string(num2));
    cout << "  ||\n";
    cout << "||";
    cout << setw(25) << right << result;
    cout << "  ||\n";
    cout << "||  Type in [C] or [exit]    ||\n";
    cout << "===============================\n";
    body();
}