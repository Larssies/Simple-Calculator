#include <iostream>
#include <random>
#include <string>

int main() {

    int rangeMax;
    int guess;

    std::cout << "Pick a random number to start the game:\n";
    std::cin >> rangeMax;

    if(!rangeMax) {
        std::cout << "Number is NOT an integer! Try again.";
        return 0;
    }

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0, rangeMax);
    int randomGeneratedNumber = distribution(generator);

    std::cout << "Pick a number between 0-" << rangeMax << "!\n";
    std::cin >> guess;

    if(randomGeneratedNumber == guess) {
        std::cout << "You guessed the right number!";
    } else {
        std::cout << "You guessed the wrong number!";
    }

    return 0;
}