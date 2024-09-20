#include <iostream>
#include <cmath>
#include <iomanip>
#include "calculatorDesign.cpp"
#include "calculatorFunctionality.cpp"

using namespace std;

string startCalculator;

int main() {

    welcome();
    body();
    cout << "[Type your answer below]\n";
    cin >> startCalculator;
    cout << endl;

    while (true) {
        if (startCalculator == "start") {
            calculate();
        }
        else if (startCalculator == "exit") {
            exit(0);
        }
        else {
            errorCommand();
            cout << "[Type your answer below]\n";
            cin >> startCalculator;
            cout << endl;
        }
    }
}
