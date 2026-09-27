/*
 * 2.1.cpp
 *
 *  Created on: Sep 26, 2026
 *      Author: steph
 */



#include <iostream>
#include <string>

int main() {
    // Run the loop 3 times for varying string lengths
    for (int i = 1; i <= 3; ++i) {
        std::string string1;
        std::string string2;
        std::string concatenatedResult;

        std::cout << "--- Iteration " << i << " of 3 ---\n";

        // Using std::getline to allow spaces in the input strings
        std::cout << "Enter the first string: ";
        std::getline(std::cin, string1);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, string2);

        // Concatenate the two strings using the + operator
        concatenatedResult = string1 + string2;

        // Output the resulting concatenated string to the screen
        std::cout << "Concatenated Output: " << concatenatedResult << "\n\n";
    }
    return 0;
}



