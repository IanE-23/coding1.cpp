// Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType{GRUNT, MINIBOSS, BOSS};

// POD structures
// custom variable type
struct enemy {
    // these data members are public by default
    int health = 10;
    int damage = 4;
    string name = "Enemy";
    enemyType type = GRUNT;
};

struct address {
    string streetName;
    int streetNumber;
    string city;
    string stateCode;
    int zipCode;
};

struct employee {
    int id = 0;
    string name;
    int age;
    // string address;
    address addr;
    float wage;

};

string addressOneLine(address addr) {
    string oneLine = "";

    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.stateCode;
    oneLine += ", " + to_string(addr.zipCode);

    return oneLine;
}

int main()
{
    cout << "Structures!!!\n";

    enemy brandon;
    brandon.name = "Evil Brandon";

    cout << "Here is " << brandon.name << ". His health is " << brandon.health << " and does " << brandon.damage << ".\n";

    enemy tom;
    tom.damage = 6;
    tom.name = "Skinny Tom";

    cout << tom.name << " is attacking " << brandon.name << "!!!!\n";
    brandon.health -= tom.damage;

    if (brandon.health < 1) {
        cout << brandon.name << "has been killed!\n";
    }
    else {
        cout << brandon.name << " has " << brandon.health << " HP remaining!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(brandon);
    enemies.push_back(tom);

    cout << "Status of all enemies:\n";
    for (int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is\n";
        switch (enemies[i].type) {
        case GRUNT:
            cout << "grunt";
            break;
        case MINIBOSS:
            cout << "mini-boss";
            break;
        case BOSS:
            cout << "boss";
            break;
        default:
            cout << "not recognized";
            break;
        }
        cout << ".\n";
    }

    employee brian;
    brian.id = 2456;
    brian.name = "Brian Foster";
    brian.age = 35;
    brian.wage = 7.25f;
    brian.addr.streetNumber = 1234;
    brian.addr.streetName = "Main Street";
    brian.addr.city = "Wichita";
    brian.addr.stateCode = "KS";
    brian.addr.zipCode = 12345;

    cout << brian.name << " lives at " << addressOneLine(brian.addr) << ".\n";
}
