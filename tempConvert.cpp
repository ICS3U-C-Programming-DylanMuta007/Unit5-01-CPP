// Copyright (c) 2025 Dylan Mutabazi All rights reserved
// Created by Dylan Mutabazi
// Date: April 2025
// converts celsius to fahrenheit using functions

#include <iostream>
#include <string>
#include <cmath>

void fahrenheit() {
    // Function converts from celsius to fahrenheit

    std::string celsius;

    std::cout << "Enter the temperature(°C) : ";
    std::cin >> celsius;
    std::cout << "" << std::endl;

    try {
        // Converts user_input into float
        float celsius_float = std::stof(celsius);

        // Calculates to convert
        float fahrenheit_conversion = ((1.8) * celsius_float) + 32;

        std::cout << celsius_float << "°C is equal to ";
        std::cout << fahrenheit_conversion << "°F. ";
        std::cout << "" << std::endl;
    } catch (...) {
        // Catches any error when trying to convert to float
        std::cout << "" << std::endl;
        std::cout << celsius << " is not an integer";
        std::cout << "" << std::endl;
    }
}

int main() {
    // Calls function fahrenheit()
    fahrenheit();
}
