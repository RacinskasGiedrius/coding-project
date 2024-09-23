#include "calculatorDesign.h"
#include "calculatorFunctionality.h"
#include "helperFunctions.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    initiateCalculator();
    while (true) {
        calculatorApp();
        string repeatCalculator;
        cout << "[Select your action]\n";
        cin >> repeatCalculator;

        if (repeatCalculator == "exit") {
            break;
        }
        else if (repeatCalculator == "C") {
            clearScreen();
            continue;
        }
        else {
            errorCommand();
        }
    }
}
