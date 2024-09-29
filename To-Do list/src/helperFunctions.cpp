#include <iostream>

void clearScreen() {
#ifndef __CLION__
        std::cout << "\n[Screen clearing is disabled in CLion]\n";
#elif _WIN32
        system("cls");
#else
        system("clear");
#endif
}
