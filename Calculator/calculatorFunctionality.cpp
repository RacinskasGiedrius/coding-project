#include <iostream>
#include <cmath>

using namespace std;

int num1;
int num2;
string action;

int sum(int num1, int num2) {
    return num1 + num2;
}
int subtraction(int num1, int num2) {
    return num1 - num2;
}
int multiplication(int num1, int num2) {
    return num1 * num2;
}
int division(int num1, int num2) {
    return double (num1 / num2);
}

void errorOperator();

void calculate() {
    cout << "===============================\n";
    cout << "||  [Num1] [Operator] [Num2] ||\n";
    cout << "||  [Enter] after each entry ||\n";
    cout << "||  To exit, type [exit]     ||\n";
    cout << "===============================\n";
    body();

    cout << "[Type Operator [+, -, /, *] or [Exit] below and press [Enter]]\n";
    cin >> action;
    cout << endl;
    if (action == "exit") {
        exit(0);
    }
    else if (action != "*","/","-","+") {
        errorOperator();
        cout << "[Type Operator [+, -, /, *] or [Exit] below and press [Enter]]\n";
        cin >> action;
        cout << endl;
    }

    cout << "[Type Num1 below and press [Enter]]\n";
        cin >> num1;
        cout << endl;

        cout << "[Type Num2 below and press [Enter]]\n";
        cin >> num2;
        cout << endl;

    if (action == "+") {
        sum(num1, num2);
    }
    else if (action == "-") {
        subtraction(num1, num2);
    }
    else if (action == "*") {
        multiplication(num1, num2);
    }
    else if (action == "/") {
        division(num1, num2);
    }

}
