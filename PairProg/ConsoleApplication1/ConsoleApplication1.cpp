// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>

using namespace std;
	/* pseudocode for FaveGames assignment
	
	 Setup
		int gameCount = 0;
	 Start loop
	
	 0. Greet Player and ask for input
	 1. Add game by getting player input
		ask the player what name they want to add
		get input
		add that name to the array and increment gameCount
		(optional) tell player what name they've added
	 2. Edit function
		what game do you want to edit
		search the list for the inputed value via for loop
		if not found "name of game is not found"
		if found "what would you like it to be changed to
	 3. Remove
		search the list for inputed value via for loop
		if not found "name of game is not found"
		if found set name to empty
		make sure empty strings are not shown
	 4. Show the list
		show the player their list of games
		make sure empty strings are not shown
	 5. Quit
		allow player to quit at their choosing*/

	int main(){
	string favGames[10];
	int gameCount = 0;

	string input;
	do {
		cout << "Let's make a Top 10 list of your favorite games!\n";
		cout << "or type 'quit' to quit\n";
		getline(cin, input);

		//player types quit
		if (input == "quit") {
			cout << "Thanks for adding to the list!\n Have a good one.\n";
			break;
		}

		if (gameCount >= 10) {
			cout << "There is already 10 games.\n";
			break;
		}

	} while (true);
	if (input == "show") {
		cout << "Here is a list of your Top 10 Favorite Games.\n";
		for (int i = 0; i < gameCount; i++) {
			cout << i + 1 << ".\t";
		}
	}

	if (input == "edit") {
		// for (int i = 0; i < gameCount; i++) {

		}

	if (input == "remove") {
		// add code later
	}
}