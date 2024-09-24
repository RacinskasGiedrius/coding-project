#include "Design/calculatorDesign.h"
#include "Functionality/calculatorFunctionality.h"
#include "Helper Functions/helperFunctions.h"
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    initiateCalculator();
    while (true) {
        calculatorApp();
        int repeatCalculator;
        std::cout << "[Select your action]\n";
        std::cin >> repeatCalculator;
        std::cout << std::endl;

        if (repeatCalculator == 1) {
            clearScreen();
            continue;
        }
        else if (repeatCalculator == 2) {
            exit(0);
        }
        while (std::cin.fail() || (repeatCalculator != 1 && repeatCalculator != 2)) {
            handleInvalidInput();
            errorCommand();
            std::cout << "[Select your action]\n";
            std::cin >> repeatCalculator;
            std::cout << std::endl;

            if (repeatCalculator == 1) {
                clearScreen();
                continue;
            }
            else if (repeatCalculator == 2) {
                exit(0);
            }
        }
    }
}
