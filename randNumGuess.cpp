// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 16, 2023
// This program makes the user guess a number from 0-9
// Then it will generate a random number
// Finally it will tell the user if they're right or wrong.

#include <cstdlib>
#include <iostream>

// Declare variables
int correctAnswer;
int userGuess;

int main() {
    // Introduce program to user and get user guess
    std::cout << "This is a guessing game";
    std::cout << "and you must guess a random number between 0 - 9 !\n";
    std::cout << "Please guess a number between 0-9: ";
    std::cin >> userGuess;
    std::cout << "\n";

    // Providing a seed value
    srand(unsigned(time(NULL)));

    // Generate random number
    correctAnswer = rand_r() % 9 + 0;

    // Check if user guess matches correct answer and if guessed right
    if (userGuess == correctAnswer) {
        std::cout << "You guessed correctly!";
    } else {
        // Display guessing wrong
        std::cout << "You guessed wrong. The number is: "
        << correctAnswer << std::endl;
    }
}
