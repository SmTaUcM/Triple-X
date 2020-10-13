// Preprocessor Directives (Imports):
// iostream is a header file.
#include <iostream>


void PrintIntroduction()
{
    // Print welcome messages to the terminal.
    // cout = 'Character Output' and << is known as the 'Insertion Operator'.
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}



void PlayGame()
{
    PrintIntroduction();

    // Declare and initialise variables.
    // Declare three numhber code.
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print the code's rules to the terminal.
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;


    // Store the player's guess.
    int GuessA, GuessB, GuessC;
    // cin = 'Character Input' and >> is known as the 'Extraction Operator'.
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;


    // Check to see if the player's input is correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!";
    }
    else
    {
        std::cout << "\nYou lose!";
    }
}



int main()
// Main Program - main() is the entry point for every C++ program and must have one to compile.:
{
    PlayGame();
    // Return - This is mandantory.
    return 0;
}
