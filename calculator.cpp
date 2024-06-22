#include <iostream>
#include <string>
#include <random>

int main() {

    double number1, number2;

    std::string operators;
    std::string kaas;

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
        std::this_thread::sleep_for(2000ms)
    }

    // CONSOLE OUTPUT (VRAAG)
    std::cout << "\nKaas?\n";

    //CONSOLE INPUT (JOUW ANTWOORD) dan slaat hij dit antwoord op in de variable 'kaas'
    std::cin >> kaas;

    //checkt of de variable kaas een string "kaas" bevat en dan print "nee dankjewel"
    if(kaas == "kaas") {
        std::cout << "Nee dankjewel";
        std::this_thread::sleep_for(2000ms)
    } else {
        std::cout << "JAA!!!!";
        std::this_thread::sleep_for(2000ms)
    }

    return 0;
}