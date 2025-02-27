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

int main() {
	string favGames[10];
	int gameCount = 0;

	string input;
	do {
		cout << "Let's make a Top 10 list of your favorite games!\n";		
		cout << "\t type 'add' to add an entry to the list\n" 
			"\t type 'edit' to edit an entry\n" 
			"\t type 'remove' to remove an entry\n"
			"\t type 'show' to show the list of entries\n"
			"\t type 'quit' to quit\n";

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
		
		// order ADD, EDIT, REMOVE, SHOW		


		// gets user input to add entry
		// working
		if (input == "add") {
			cout << "What game would you like to add?\n";
			// adds user input to the array as an entry
			getline(cin, input);
			favGames[gameCount++] = input;
			cout << "\tYou just added " << input << ".\n";
		}
		// edits an entry
			// displays list of entries
				// choose which entry to edit via user input
				// then asks what to change the name to via user input
		// testing
		if (input == "edit") {
			cout << "What game would you like to edit?\n";
			// displays list to select what enty to edit
			for (int i = 0; i < gameCount; i++) {
				cout << i + 1 << ".\t";
				cout << favGames[i] << "\n";
				getline(cin, input);
				// should allow the user to change the name of an entry in theory
				if (favGames[i] == input) {
					cout << "What would you like to name this game?\n";
					getline(cin, input);
					favGames[i] = input;
				}
			}
		}
		// removes the entry 
			// displays list 
			// asks user to chose entry to remove
		// working
		if (input == "remove") {
			cout << "What game do you want to remove?\n";
			// displays list to select what entry to remove
			for (int i = 0; i < gameCount; i++) {
				cout << i + 1 << ".\t";
				cout << favGames[i] << "\n";
				getline(cin, input);
				// should remove entry in thoery
				if (favGames[i] == input) {
					favGames[i] = "";
					cout << "Removing Game!\n";
				}
			}
		}
		// shows the current list of entries
		// working
		if (input == "show") {
			// displays the current list of entries
			cout << "Here are your favorite Games!\n";
			for (int i = 0; i < gameCount; i++) {
				// sets any entry that is 'show' to an empty string
				if (favGames[i] == "show") {
					favGames[i] = "";
					continue;
				}
				// sets any entry that is 'remove' to an empty string
				if (favGames[i] == "remove") {
					favGames[i] = "";
					continue;
				}
				// sets any entry that is 'edit' to an empty string
				if (favGames[i] == "edit") {
					favGames[i] = "";
					continue;
				}
				// does not display any entry that is an empty string
				if (favGames[i] == "") {
					gameCount--;
					i - 1;
					continue;
				}
				cout << i + 1 << ".\t";
				cout << favGames[i] << "\n";
			}
		}
	} while (true);	
}