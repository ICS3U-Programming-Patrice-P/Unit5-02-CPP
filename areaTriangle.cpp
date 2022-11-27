// Copyright (c) 2022 Patrice Pat-Odita All rights reserved
//
// Created By: Patrice Pat-Odita
// Date: Nov 26, 2022
// This program asks the user to input the height and base
// of a triangle and calculates the area.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::stof;
using std::string;

// calculates the area of the triangle with user input of base and height
void CalculateArea(float baseflt, float heightflt) {
    float area = (baseflt * heightflt) / 2;
    cout << "The area of your triangle is " << area << " cm^2";
}

int main() {
    // gets user input
    string height;
    cout << "Enter the height in cm: ";
    cin >> height;

    string base;
    cout << "Enter the base length in cm: ";
    cin >> base;

    try {
        // converts user input to float
        float baseflt = stof(base);
        float heightflt = stof(height);
        // only calls function if inputted numbers are positive
        if (heightflt > 0 && baseflt > 0) {
            // calls function with arguments baseflt and heightflt
            CalculateArea(heightflt, baseflt);
        } else {
            cout << "Numbers can't be negative.";
        }
    // tells user their input is invalid
    } catch (...) {
        cout << "Invalid input";
    }
}
