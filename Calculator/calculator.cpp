#include <iostream>
#include <cmath>
#include <iomanip>
#include "calculatorDesign.cpp"

using namespace std;

string userAction;
string selectedOperator;
int num1;
int num2;
int result;

int main() {
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

    calculateDesign();
    body();
    cout << "[Type in the first number below]\n";
    cin >> num1;
    cout << endl;

    cout << "[Type in the Operator (+, -, *, /) below]\n";
    cin >> selectedOperator;
    cout << endl;

    cout << "[Type in the second number below]\n";
    cin >> num2;
    cout << endl;

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
    else {
        errorOperator();
        cout << "[Type in the Operator (+, -, *, /) below]\n";
        cin >> selectedOperator;
        cout << endl;
    }

    cout << "===============================\n";
    cout << "||";
    cout << setw(25) << right << (to_string(num1) + " " + selectedOperator + " " + to_string(num2));
    cout << "  ||\n";
    cout << "||";
    cout << setw(25) << right << result;
    cout << "  ||\n";
    cout << "||  Type in [C] or [Exit]    ||\n";
    cout << "===============================\n";
    body();

    cout << "[Select your action]\n";
    cin >> userAction;
    cout << endl;

    while (true) {
        if (userAction == "C") {
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
    calculateDesign();
    body();
    cout << "[Type in the first number below]\n";
    cin >> num1;
    cout << endl;

    cout << "[Type in the Operator (+, -, *, /) below]\n";
    cin >> selectedOperator;
    cout << endl;

    cout << "[Type in the second number below]\n";
    cin >> num2;
    cout << endl;

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
    else {
        errorOperator();
        cout << "[Type in the Operator (+, -, *, /) below]\n";
        cin >> selectedOperator;
        cout << endl;
    }
}
