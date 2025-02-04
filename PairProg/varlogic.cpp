#include <iostream>		// this sends and recieve text from the console
#include <string>		// allows the use of string variables
#include <ctime>		// allows the use of time
#include <cstdlib>		//allows the use of rand

using namespace std; // adds a lot of bloat, but keeps us from typing "std::" all the time

// this is where the program starts running
int main()
{
	// always seed your random number generator ONCE, at the beginning of your program.
	srand(time(0));			// seeding the number generator

	bool debug = true;				//turn this to false before shipping
	if (debug) cout << "Debug Mode IS ON\n";
	cout << "This is the start of Week 3's lecture on \n";
	cout << "\t Variables and Logic!\n";
	
	// an if statement is a test
	// if test is true, the code block runs
	// if test is false, the code block does NOT run
	// if(test) { code block }
	if (true)
	{
		cout << "this line of code will always run\n";
	}// end of if(true)

	if (false)
	{
		cout << "this line of code will never run\n";
	}// end of if(false)
	if (1 + 1 == 2)
	{
		cout << "Thank goodness math still works\n";
	}
	if (2 + 2 == 900)
	{
		cout << "That is incorrect\n";
	}

	//Lets talk about variables
	// integers, floats, doubles, characters, strings, booleans

	//an integer is a whole number positive or negative, between -2bil and 2bil
	//when creating a variable, specify type, name, and optionaly value. (always assign value)
	
	// create a new integer variable with the name playerScore
	// playerScore is then assigned 4550
	int playerScore = 4550;

	// declaring (and defining)the variable, type int, name = playerTwoScore;
	int playerTwoScore = 0;
	// constant variables canno change their value
	const float EARTH_GRAVITY = -9.81f; // acceleration in meters/second

	cout << "Player 1 score = " << playerScore << "\n";
	cout << "Player 2 score = " << playerTwoScore << "\n";
	cout << "Earths gravity is " << EARTH_GRAVITY << " meters/second.\n";

	// a float is a floating point number, accurate to 7 digits.
	// that means, 9,999,999 or 0.000001

	// a double is a double-precision floating point number
	// accurate to 22 digits.
	// that means 9,999,999,999,999,999,999,999

	// we are creating a constant variable of the type double
	//name PI, with the value of 3.141592653589793285
	const double pi = 3.141592653589793285;

	// a character isa single unicode blah blah blah. one key on a key board.
	char answer = 'no';				// This stores uesr input

	cout << "Would you like to keep playing?\n";	// ask the user a question
	cin >> (answer);								// get user input

	if (answer == 'y') {							//Test the inpt
		cout << "Hurray, let's go again\n";			// print text
	}
	else {											// if the test was false
		cout << "Thanks for playing\n";				//print text
		return 0;									//quit program early
	}

	// strings are an array of characters, in an ordered list, one after the other
	string profName = "Dumbledore";
	string user = "BMO";
	string pass = "videogames";
	string input = "";								// This will store the user's text input

	cout << "What is your username?\n";				// for example: input = "BMO"
	cin >> input;

	if (input == user) {
		cout << "What is your password\n";
		cin >> input;

		if (input == pass) {
			cout << "Hello Bmo! Professor " << profName << " has a question for you.\n";
		}
		else {
			cout << "Wrong password. Nice try Jake.\n";
		}
	}
	else {
		cout << "Username is not recognized.\n";
	}

	// booleans are a variable type that can only be true or false
	// yess or no, on or off, etc

	bool playerIsAlive = true;
	int score = 0;			//keeps track of player score
	if (debug) cout << "score = " << score << ".\n";
	// this is the simplest of loops
	// it runs as long as the test is true
	// while(test) { code block}
	while (playerIsAlive) {
		cout << "Are you dead yet?\n";
		cin >> input;
		score += 5;			// this adds five to the value of score
		if (debug) cout << "score = " << score << ".\n";

		// build an if statement
		// if player says "yes"
		// make playerIsAlive = "false"
		if (input == "yes") {
			playerIsAlive = false;
			if (debug) cout << "score after loop = " << score << ".\n";
			cout << "Welcome to the afterlife. My name is Anubis.\n" << "your score is " << score << ". \n";
		}
		
	}

	// let's talk about random. 10 minutes is enough time

	// at the top of your source file .
	// #include <cstdlib>
	// #include <ctime>

	cout << "Here is a random number" << rand() << ".\n";
	
	cout << "Here is a random number:\n";
	int count = 0;
	while (count < 10) {
		count += 1;
		cout << (rand() %10)+1 << ".\n";
	}
} // this is the end of main()
