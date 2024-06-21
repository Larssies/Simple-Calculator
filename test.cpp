#include <iostream>
#include <string>

int main() {

    double number1, number2;

    std::string operators;

    std::cout << "Provide the operator (+, -, *, /):\n";
    std::cin >> operators;

    std::cout << "Provide the first number:\n";
    std::cin >> number1;

    std::cout << "Provide the second number:\n";
    std::cin >> number2;

    if(operators == "+") {
        std::cout << number1 + number2;
    } else if(operators == "-") {
        std::cout << number1 - number2;
    } else if(operators == "/") {
        std::cout << number1 / number2;
    } else if(operators == "*") {
        std::cout << number1 * number2;
    } else {
        std::cout << "Invalid operator! Try again!";
    }

    return 0;
}