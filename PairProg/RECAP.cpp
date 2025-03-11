// Ian Engel
// Week 8

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    
    bool debug = true;              // turn to false when shipping.

    string input ="";
    
    
    // ask the player if they prefer cheese or pepperoni pizza
    // use an if, esle if, and else to check their input
    // have the computer agree or disagree with their choice, or berate them for any other option.
    cout << "Do you prefer cheese or pepperoni pizza. You must choose one!\n";
    getline(cin, input);

    if (input == "cheese") {
        cout << "Really CHEESE, how basic are you!\n";
    }
    else if (input == "pepperoni") {
        cout << "Pepperoni is fine, I guess.\n";
    }
    else if (input == "pineapple") {
        cout << "That's my favorite. Good job on being correct.\n";
    }
    else {
        cout << "You didn't choose correctly ... Prepare to be exterminated.\n";
    }

    // build a number guessing game
    // have the computer choose a random number between 1 and 10 (inclusive)
    // start a while loop 
    // ask the player for a number
    // if number is too high, say "lower"
    // if number is too low, say "higher"
    // don't forget
        // #include <cstdlib>
        // #include <ctime>
        // in main(), srand(time(0));

    int number = (rand() % 10) + 1;
    
    cout << "Guess a number between 1 and 10, including those numbers.\n";
    
    while (true) {

        
        if (debug) {
            cout << "The number is " << number << ".\n";
        }
        getline(cin, input);
        int playerGuess = 0;

        if (input == "quit") {
            cout << "Running away from the challenge I see.\n";
            break;
        }
        try {
            playerGuess = stoi(input);
        }
        catch (invalid_argument) {
            cout << "That is not a number. Guess a number dimwit!\n";
            continue;
        }
        
        if (stoi(input) > number) {
            cout << "The number you guessed is too high.\n";
        }
        else if (stoi(input) < number) {
            cout << "The number you guessed is too low.\n";
        }
        else {
            cout << "You guessed the number! Congrats you got nothing!\n";
            break;
        }       
    }

    return 0;
}