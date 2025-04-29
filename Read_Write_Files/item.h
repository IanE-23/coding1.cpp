#pragma once
#include <iostream>
#include <string>
using namespace std;

/*
homework:
	1. create a function in filemgmt.cpp to read a file  done
		a. each new line becomes a new element in the array
	2. finish the item class
	3. in main, create an array of 5 items and display them with a loop
		a. use itemArray[i].examine() to show all of the details of the item
	4. upload the folder of files to github.
		a. submit a link to the assignment page with the folder in github.com
*/

class item
{	
public:
	item() {};
	item(string);
	void use();
	void examine();

	string name = "";
	enum location location;		// where the item is stored
};