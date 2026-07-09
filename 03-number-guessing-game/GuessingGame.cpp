#include <iostream>
#include <string>

int main ()
{

//Computer chooses 7.
//The user is prompted to guess the number.
//If the user guesses correctly, the program outputs "Congratulations! You guessed the number."
//If the user guesses incorrectly, the program outputs "Sorry, that's not the number. Try again." and prompts the user to guess again.
//The program continues until the user guesses the correct number
//If the user enters a number outside the range of 0-9, the program outputs "Please enter a number between 0 and 9." and prompts the user to guess again.
//if the user enters a number lesser than the secret number, the program outputs "Your guess is too low. Try again." and prompts the user to guess again.
//if the user enters a number greater than the secret number, the program outputs "Your guess is too high. Try again." and prompts the user to guess again.
//IF guess < secret number "Guess higher"
//IF guess > secret number "Guess lower"
//ELSE "Congratulations!"
//After the player guesses correctly, print something like: you guessed the number in X tries! (where X is the number of guesses the player made).

    int secretNumber = 7;
    int userGuess;
    int guessCount = 0;

    std::cout << "Guess the number (0-9): ";
    std::cin >> userGuess;
   

    while (userGuess != secretNumber) 
    {
        if (userGuess < 0 || userGuess > 9) {
            std::cout << "Please enter a number between 0 and 9." << std::endl;
        }
        else if (userGuess < secretNumber) {
            std::cout << "Your guess is too low. Try again." << std::endl;
        }
        else if (userGuess > secretNumber) {
            std::cout << "Your guess is too high. Try again." << std::endl;
        }

         else {
        std::cout << "Congratulations! You guessed the number." << std::endl;
    }

        std::cout << "Guess the number (0-9): ";
        std::cin >> userGuess;

    
    }
       


return 0;
}