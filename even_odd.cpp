// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Lucas LeBlanc
// Created on: Nov 2022
// This program uses for loop

#include <iostream>

int main() {
    // this function uses for loop
    int number_as_integer;
    std::string number;
    int num2_as_integer;
    std::string num2;
    int odd = 0;
    int even = 0;

    // input
    std::cout << "How many numbers do you want to add: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process and output
    try {
        number_as_integer = std::stoi(number);
        for (int counter = 0; counter < number_as_integer; counter++) {
            std::cout << "Enter the number: ";
            std::cin >> num2;
            num2_as_integer = std::stoi(num2);
            if (num2_as_integer % 2 == 0) {
                even = even + num2_as_integer;
            } else {
                odd = odd + num2_as_integer;
            }
        }
        std::cout << "The sum of all even numbers is = "
                  << even << "." << std::endl;
        std::cout << "The sum of all odd numbers is = "
                  << odd << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "invalid input, try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
