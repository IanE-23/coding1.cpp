#include "item.h"

// in c++, the first enum value is 0,  then counts up
enum location { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY};

item::item(string givenName = "") {
	cout << "Creating a new item!\n";
	location = MARKET;	// set the default location for items.
	name = givenName;
}

void item::use() {
	cout << "The player uses the " << name << ".\n";
}

void item::examine() {
	if (name == "Diamond Pickaxe") {
		cout << "This is able to break obsidian.\n";
	}
	else if (name == "Crafting Table") {
		cout << "This is where we craft.\n";
	}
	else if (name == "Ender Pearl") {
		cout << "This teleports whoever throws it.\n";
	}
	else if (name == "Diamond Sword") {
		cout << "This is my favorite weapon.\n";
	}
	else if (name == "Waxed Lightly Weathered Cut Copper Stairs") {
		cout << "This has a long name.\n";
	}
	else {
		cout << "I do not know this item.\n";
	}
}