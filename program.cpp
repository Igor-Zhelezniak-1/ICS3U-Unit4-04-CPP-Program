// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is game

#include <iostream>
#include <random>

main() {
    // this function uses a break statement
    std::string integer;
    int loopCounter;
    int randomNumber;
    int number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    randomNumber = idist(rgen);

    // process & output
    while (true) {
        // input
        std::cout << "Enter the number between 0-9: ";
        std::cin >> integer;
        try {
        number = std::stoi(integer);
            if (number == randomNumber) {
                std::cout << "You guessed correct!" << std::endl;

                std::cout << "" << std::endl;
                break;
            } else if (number < 0 || number > 9) {
                std::cout << "You need enter number 0-9" << std::endl;

                std::cout << "" << std::endl;
            } else if (number > randomNumber) {
                std::cout << "Secret number less than " << number << std::endl;

                std::cout << "" << std::endl;
            } else if (number < randomNumber) {
                std::cout << "Secret number greater than "
                << number << std::endl;

                std::cout << "" << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "This was not a number" << std::endl;

        std::cout << "" << std::endl;
        }
    }
}
