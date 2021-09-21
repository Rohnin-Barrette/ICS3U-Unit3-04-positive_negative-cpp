// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program tells the user if an integer is positive, negative or neutral

#include <iostream>

int main() {
    // This program tells the user if an integer is
    // positive, negative or neutral
    int integer;

    // input
    std::cout << "Enter an integer here: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // process
    if (integer > 0) {
        // output
        std::cout << integer << " That's a positive integer.";
    } else if (integer < 0) {
        // output 2
        std::cout << integer << " That's a negative integer.";
    } else {
        // output 3
        std::cout << integer << " Thats a zero.";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}

