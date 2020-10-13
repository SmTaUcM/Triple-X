// Preprocessor Directives (Imports):
// iostream is a header file.
#include <iostream>

// Main Program:
int main()
{
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";

    // Declare and initialise variables.
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    // Return.
    return 0;
}
