// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on May 2021
// This program converts celsius to fahrenheit

#include <iostream>
#include <cmath>

void ConvertDegrees() {
    std::string stringCelsius;
    int degreeCelsius;
    int fahrenheit;

    // input
    std::cout << "Enter temperature in (°C): ";
    std::cin >> stringCelsius;

    // process & output
    try {
        degreeCelsius = std::stoi(stringCelsius);
        fahrenheit = (9/5) * degreeCelsius + 32;
        std::cout << degreeCelsius << " °C is equal to " << fahrenheit << "°F." << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Invalid data." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}

main() {
    // this function calls other functions

    // call function
    ConvertDegrees();
}
