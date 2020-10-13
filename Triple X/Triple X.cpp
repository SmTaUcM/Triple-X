// Preprocessor Directives (Imports):
// iostream is a header file.
#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Print welcome messages to the terminal.
    // cout = 'Character Output' and << is known as the 'Insertion Operator'.
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nYou need to enter the correct codes to continue...\n\n";
}



bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare and initialise variables.
    // Declare three numhber code.
    const int CodeA = rand() % Difficulty + Difficulty; // rand() returns a value from 0 to 32,767
    const int CodeB = rand() % Difficulty + Difficulty; // + 1 stops any number being 0.
    const int CodeC = rand() % Difficulty + Difficulty; // % 1 only returns 0, % 2 only returns 0, 1 etc...

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
        std::cout << "\n*** Well done agent! You have extracted a file! Keep going! ***";
        return true;
    }
    else
    {
        std::cout << "\n*** You entered the wrong code! Careful agent! Try again! ***";
        return false;
    }
}



int main()
// Main Program - main() is the entry point for every C++ program and must have one to compile.:
{
    srand(time(NULL)); // Produce a random seed based on the time of the day.

    // Declare and initialise variables.
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop the game until all levels are completed.
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        // .clear() and .ignore() reset 'cin' so that it is not awaiting input if a char is entered and not an int.
        std::cin.clear(); // Clears any cin errors.
        std::cin.ignore(); // Discards the buffer / stream.

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    
    // Display the game winning message.
    std::cout << "\n*** Great work agent! You got all the files! Now get out of there! ***\n";
    // Return - This is mandantory.
    return 0;
}
