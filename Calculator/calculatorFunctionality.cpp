#include "calculatorFunctionality.h"

#include <iostream>
#include <cmath>
#include <iomanip>
#include "calculatorDesign.h"

using namespace std;

string selectedOperator;
string userAction;
int num1;
int num2;
int result;

void calculatorApp() {
    userInput();
    calculateResult();
    displayResult();
}

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

void userInput() {
    calculateDesign();
    body();
    cout << "[Type in the first number below]\n";
    cin >> num1;
    cout << endl;


    // Handle if the first number is not an Integer;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        clearScreen();
        errorNumber();
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
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        clearScreen();
        errorNumber();
        cout << "[Type in the second number below]\n";
        cin >> num2;
        cout << endl;
    }
}

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
        result = num1 / num2;
    }
}

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