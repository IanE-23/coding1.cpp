// H-Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class human {
public:
    human(string, int, int);
    void SayHello();
    
    void setHealth(int byAmount) {
        if (byAmount < 0) {
            health = 0;
        }
        else if (byAmount > 50) {
            health = 50;
        }
        else {
            health = byAmount;
        }
    }

    int getHealth() {
        return health;
    }

    void setDamage(int givenDamage) {
        if (givenDamage > 8) {
            damage = 8;
        }
        else if (givenDamage < 1) {
            damage = 1;
        }
        else {
            damage = givenDamage;
        }
    }

    int getDamage() {
        return damage;
    }

    string getName() {
        return name;
    }
    
private:
    string name;
    int health = 10;
    int damage = 4;

protected:
};

human::human(string givenName, int givenHealth, int givenDamage) {
    name = givenName;
    health = givenHealth;
    damage = givenDamage;

    cout << "A new human has entered the arena!!!!!\n";
}

void human::SayHello() {
    cout << "My name is " << name << " and I will conquer the arena!\n";
    cout << name << " has " << getHealth() << " health points and does " << getDamage() << " points of damage.\n";
}

int main()
{
    human steve("Steve", 25, 5);
    steve.SayHello();

    human ian("Ian", 2, 99);
    ian.SayHello();

    human huamn("HUAMN", 50, 2);
    huamn.SayHello();

    cout << steve.getName() << " attacks " << huamn.getName() << " for " << steve.getDamage() << " points of damage!\n";
    huamn.setHealth(huamn.getHealth() - steve.getDamage());
    cout << huamn.getName() << " now has " << huamn.getHealth() << " points of health remaining!\n";

    cout << ian.getName() << " attacks " << steve.getName() << " for " << ian.getDamage() << " points of damage!\n";
    steve.setHealth(steve.getHealth() - ian.getDamage());
    cout << steve.getName() << " now has " << steve.getHealth() << " points of health remaining!\n";
}