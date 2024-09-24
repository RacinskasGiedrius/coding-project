#include "../Design/calculatorDesign.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

void clearScreen() {

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
//     for (int i = 0; i < 100; ++i) {
//         std::cout << std::endl;
//     }
}



void handleInvalidInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    clearScreen();
}