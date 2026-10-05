#include <iostream>

int main() {
    // 1. Declare three standard integer variables
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    // 2. Ask the user to enter three integer values
    std::cout << "Enter three integer values separated by spaces: ";
    std::cin >> val1 >> val2 >> val3;

    // 3. Create an integer pointer to dynamic memory for each variable
    int* ptr1 = new int(val1);
    int* ptr2 = new int(val2);
    int* ptr3 = new int(val3);

    std::cout << "\n--- Displaying Contents ---\n";

    // 4. Display the contents of the variables
    std::cout << "Standard Variables (Stored on Stack):\n";
    std::cout << "val1: value = " << val1 << ", memory address = " << &val1 << "\n";
    std::cout << "val2: value = " << val2 << ", memory address = " << &val2 << "\n";
    std::cout << "val3: value = " << val3 << ", memory address = " << &val3 << "\n\n";

    // 5. Display the contents of the pointers
    std::cout << "Pointers to Dynamic Memory (Stored on Heap):\n";
    std::cout << "ptr1: points to address = " << ptr1 << ", value at address = " << *ptr1 << "\n";
    std::cout << "ptr2: points to address = " << ptr2 << ", value at address = " << *ptr2 << "\n";
    std::cout << "ptr3: points to address = " << ptr3 << ", value at address = " << *ptr3 << "\n";

    // 6. Free the dynamically allocated memory to prevent memory leaks
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // 7. Reset pointers to null to avoid dangling pointers
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}
