#include <iostream>

void clearScreen() {
#ifdef NDEBUG
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
#else
    std::cout << "\n[Screen clearing is disabled in CLion]\n";
#endif
}
