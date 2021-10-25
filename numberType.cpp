// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program is to read the integer and display it

#include <iostream>

int main() {
    // this function is to read the integer and display it
    int integer;

    // input
    std::cout << "Enter a integer here: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // process
    if (integer > 0) {
        // output
        std::cout << integer << " is a positive number";
    } else if (integer < 0) {
        // output
        std::cout << integer << " is a negative number";
    } else {
        std::cout << "0 is just zero";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone" << std::endl;
}
