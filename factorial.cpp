// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: November 1 2022
// This program outputs the factorial of user's number

#include <iostream>

int main() {
    // initialization of counter, product, and user input
    int counter = 0;
    int product = 1;
    int userNumberInt;
    std::string userNumberStr;

    // Get the user's input
    std::cout << "Enter a whole number: ";
    std::cin >> userNumberStr;
    std::cout << std::endl;

    // Tries casting the user's number to an integer
    try {
        userNumberInt = std::stoi(userNumberStr);

        // Program restarts if user's year could not be casted to an integer
    } catch (std::invalid_argument) {
        std::cout << "You must enter an integer.\n\n";
        return main();
    }

    // check if user's number is a negative number
    if (userNumberInt < 0) {
        std::cout << "You must enter a positive integer" << std::endl;
    } else {
        // calculate the factorial of the user's number
        do {
            counter++;
            product = product * counter;
            std::cout << "Tracking " << counter << " times through the loop\n";
        } while (counter < userNumberInt);

        // display the answer to the user
        std::cout << userNumberInt << "! =" << product << std::endl;
    }
}
