#include <iostream>
#include <iomanip>

void welcomeDesign() {

    std::cout << "===============================\n";
    std::cout << "||              Calculator!  ||\n";
    std::cout << "||                Start [1]  ||\n";
    std::cout << "||                Exit  [2]  ||\n";
    std::cout << "===============================\n";
}

void calculateDesign() {
    std::cout << "===============================\n";
    std::cout << "||             [1st Number]  ||\n";
    std::cout << "||  [Operator (+, -, /, *)]  ||\n";
    std::cout << "||             [2nd Number]  ||\n";
    std::cout << "===============================\n";
}

void body() {

    std::cout << "||  ( 9 ) ( 8 ) ( 7 ) ( / )  ||\n";
    std::cout << "||  ( 6 ) ( 5 ) ( 4 ) ( * )  ||\n";
    std::cout << "||  ( 3 ) ( 2 ) ( 1 ) ( - )  ||\n";
    std::cout << "||  ( C ) ( 0 ) ( = ) ( + )  ||\n";
    std::cout << "===============================\n\n";

}

void errorCommand() {
    std::cout << "===============================\n";
    std::cout << "||                   Error!  ||\n";
    std::cout << "||         Unknown command!  ||\n";
    std::cout << "||        Please try again!  ||\n";
    std::cout << "===============================\n";
    body();
}

void errorNumber() {
    std::cout << "===============================\n";
    std::cout << "||                   Error!  ||\n";
    std::cout << "||          Invalid number!  ||\n";
    std::cout << "||        Please try again!  ||\n";
    std::cout << "===============================\n";
    body();
}

void errorOperator() {
    std::cout << "===============================\n";
    std::cout << "||                   Error!  ||\n";
    std::cout << "||        Unknown operator!  ||\n";
    std::cout << "||        Please try again!  ||\n";
    std::cout << "===============================\n";
    body();
}

void errorDivisionByZero() {
    std::cout << "===============================\n";
    std::cout << "||                   Error!  ||\n";
    std::cout << "||        Division by zero!  ||\n";
    std::cout << "||             Continue [1]  ||\n";
    std::cout << "===============================\n";
    body();
}