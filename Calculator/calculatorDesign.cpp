#include <iostream>

using namespace std;

void welcomeDesign() {

    cout << "===============================\n";
    cout << "||  Welcome to the Calc!     ||\n";
    cout << "||  To start, type [start]   ||\n";
    cout << "||  To exit, type [exit]     ||\n";
    cout << "===============================\n";
}

void calculateDesign() {
    cout << "===============================\n";
    cout << "||  [Num1] [Operator] [Num2] ||\n";
    cout << "||  Press [Enter] after each ||\n";
    cout << "||  entry.                   ||\n";
    cout << "===============================\n";
}

void body() {

    cout << "||  ( 9 ) ( 8 ) ( 7 ) ( / )  ||\n";
    cout << "||  ( 6 ) ( 5 ) ( 4 ) ( * )  ||\n";
    cout << "||  ( 3 ) ( 2 ) ( 1 ) ( - )  ||\n";
    cout << "||  ( C ) ( 0 ) ( = ) ( + )  ||\n";
    cout << "===============================\n\n";

}

void errorCommand() {
    cout << "===============================\n";
    cout << "||  Error!                   ||\n";
    cout << "||  Unknown command!         ||\n";
    cout << "||  Please try again!        ||\n";
    cout << "===============================\n";
    body();
}

void errorNumber() {
    cout << "===============================\n";
    cout << "||  Error!                   ||\n";
    cout << "||  Invalid number!          ||\n";
    cout << "||  Please try again!        ||\n";
    cout << "===============================\n";
    body();
}

void errorOperator() {
    cout << "===============================\n";
    cout << "||  Error!                   ||\n";
    cout << "||  Unknown operator!        ||\n";
    cout << "||  Please try again!        ||\n";
    cout << "===============================\n";
    body();
}

void clearScreen() {
    for (int i = 0; i < 100; ++i) {
        cout << endl;
    }
}