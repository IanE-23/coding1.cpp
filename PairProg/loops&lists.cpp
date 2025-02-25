// Ian Engel Coding 1 Feb 25, 2025
// Loops and Lists

#include <iostream>
#include <string>

using namespace std;
int main() {
	// we are going to build an array
	// an array is an ordered list of a single type of variable

	//create an array of integers with a size of 10
	
	const int MAX_SIZE = 10;						// this variable can not be changed after
													// we use ALL CAPS to show constant variable
	
	int element = 0;								// this keeps track of where in the array we are

	int scores[MAX_SIZE];							// this array has just created 10 spots for integers

	// adding a value to the first element in the array
	scores[0] = 9001;

	//display the value to confirm that it works
	cout << "The highest score in scores is " << scores[0] << ".\n";

	// add thre more scores using element++

	element = 1;									//point at the second element in the list
	scores[element++] = 682;
	scores[element++] = 604;
	scores[element++] = 412;
	scores[element++] = -12;
	scores[element++] = 333;
	scores[element++] = 254;

	cout << "The second score is " << scores[1] << ".\n";

	// print all the scores
		// use a while loop to run through all of the scores.
		// the loop is done when the loop counter is equal to element
	int counter = 0;
	while (counter < element) {						// while counter is less thanelement, keep looping
		if (scores[counter] < 0) {
			counter += 1;
			continue;								// stop the code, go to the next loop
		}
		cout << scores[counter] << "\n";
		counter += 1;
	}

	// create an array of strings named bestFriends
	// use a do-while loop to ask the user to add names, or quit
	// at the end, we will use a for loop, to display all of the names

	// create an array of string variables. you MUST specify a size, we'll pick 20
	string bestFriends[20];
	int friendCount = 0;
	
	string input;
	do {
		cout << "We're making a list of best friends, who would you like to add?\n";
		cout << "or type 'quit' to quit.\n";
		getline(cin, input);

		// add the fail cases first
		if (input == "quit") {						// if the user types 'quit', stop the loop
			cout << "Thanks for adding names to the list!\n";
			break;
		}

		if (friendCount >= 19) {					// if the user fills the list, stop the loop
			cout << "Oh no, that's all the friends that we can have.\n";
			break;
		}

		// then add your functionality
		bestFriends[friendCount++] = input;			// add what the user typed to the array

	} while (true);
	cout << "Here is a list of your best friends.\n";
	
	// a for loop runs "for a certain amount of times"
	// a for loop includes the counter, the test, and the increment action
		// all on the same line
		// for(setup; test; action) { code}
	for (int i = 0; i < friendCount; i++) {
		if (bestFriends[i] == "") {
			continue;
		}
		cout << i + 1 << ".\t";
		cout << bestFriends[i] << "\n";
	}

	/* 
	* pseudocode for FaveGames assignment
	* 
	* Setup
	*	int gameCount = 0;
	* Start loop
	* 
	* 0. Greet Player and ask for input
	* 1. Add game by getting player input
	*	ask the player what name they want to add
	*	get input
	*	add that name to the array and increment gameCount
	*	(optional) tell player what name they've added
	* 2. Edit function
	*	what game do you want to edit
	*	search the list for the inputed value via for loop
	*	if not found "name of game is not found"
	*	if found "what would you like it to be changed to
	* 3. Remove
	*	search the list for inputed value via for loop
	*	if not found "name of game is not found"
	*	if found set name to empty
	*	make sure empty strings are not shown
	* 4. Show the list
	*	show the player their list of games
	*	make sure empty strings are not shown
	* 5. Quit
	*	allow player to quit at their choosing
	

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
	}

	if (input == "remove") {
		// add code later
	}*/
}