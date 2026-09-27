//============================================================================
// Name        : 2.cpp
// Author      : Stephen
// Version     :
// Copyright   : Your copyright notice
// Description : Print name, address,
//============================================================================

#include <iostream>
#include <string>

int main() {
    // Fictional person data stored in variables
    std::string firstName = "Optimus";
    std::string lastName = "Prime";
    std::string streetAddress = "123 Cybertron Way";
    std::string city = "Iacon City";
    std::string zipCode = "94016";

    // Displaying the information to the console
    std::cout << "--- Fictional Person Information ---" << std::endl;
    std::cout << "First Name:     " << firstName << std::endl;
    std::cout << "Last Name:      " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City:           " << city << std::endl;
    std::cout << "Zip Code:       " << zipCode << std::endl;
    std::cout << "------------------------------------" << std::endl;

    return 0;
}
