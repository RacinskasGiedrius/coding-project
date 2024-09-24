#include "calculatorDesign.h"
#include <iostream>
#include <cmath>


using namespace std;

void clearScreen() {
    for (int i = 0; i < 100; ++i) {
        cout << endl;
    }
}

void handleInvalidInput() {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    clearScreen();
    errorNumber();
}