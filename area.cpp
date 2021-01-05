// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program uses user defined functions to calculate the area of a triangle

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = base * height / 2;

    // output
    std::cout << "The area is " << area << " cm²" << std::endl;
}

main() {
    // this function gets length and width

    try {
        float baseFromUser;
        float heightFromUser;
        std::string baseString;
        std::string heightString;

        // input
        std::cout << "Enter the base length of a triangle (cm): ";
        std::cin >> baseString;
        std::cout << "Enter the height of a triangle (cm): ";
        std::cin >> heightString;
        std::cout << std::endl;

        baseFromUser = std::stoi(baseString);
        heightFromUser = std::stoi(heightString);

        // call functions
        CalculateArea(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout <<
        "That cannot be calculated because you entered an invalid key."
        << std::endl;
    }
}
