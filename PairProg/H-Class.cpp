// H-Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool debug =- true;

class human {
public:
    human(string, int, int);
    void SayHello();
    
    virtual void setHealth(int givenHealth) {
        if (debug = true) {
            cout << "The current health is " << health << ".\n";
            cout << "givenHealth is " << givenHealth << ".\n";
        }
        if (givenHealth < 0) {
            health = 0;
        }
        else if (givenHealth > 50) {
            health = 50;
        }
        else {
            health = givenHealth;
        }
    }

    int getHealth() {
        return health;
    }

    void setDamage(int givenDamage) {
        if (givenDamage > 10) {
            damage = 10;
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

    void setName(string givenName) {
        name = givenName;
    }
    
    string getName() {
        return name;
    }
    
protected:
    string name;
    int health;
    int damage;

private:
};

human::human(string givenName = "", int givenHealth = 10, int givenDamage = 4) {
    setName(givenName);
    setHealth(givenHealth);
    setDamage(givenDamage);

    cout << "A new human has entered the arena!!!!!\n";
}

void human::SayHello() {
    cout << "My name is " << name << " and I will conquer the arena!\n";
    cout << name << " has " << getHealth() << " health points and does " << getDamage() << " points of damage.\n";
}

class barbarian : public human {
public:
    //barbarian() {
        //cout << "A fierce barbarian from the north approaches!\n";
        //health = 45;

        //SayHello();
    //}
    barbarian(string givenName = "", int givenHealth = 10, int givenDamage = 4) {
        setName(givenName);
        setHealth(givenHealth);
        setDamage(givenDamage);
    }
    
    void Yell() {
        cout << " The Barbarian unleashes an inhuman yell, boosting all of his team's stats.\n";
    }

    void doubleSwingDamage(human& target) {
        cout <<"The barbarian siwngs both weapons at " << target.getName() << "!\n";

        int tempDamage = getDamage() * 2;
        target.setHealth(target.getHealth() - tempDamage);
    }

};

// create a shopkeep class that inherits from the human class
    // add a dropGold() function.
    // add a shopName variable.

class shopkeep: public human {
    //base HP, Attack, gold Amount
    int gold = 20;
    string shopName = "";
    
public:
    void setShopName(string givenShopName) {
        shopName = givenShopName;
    }

    void setHealth(int givenHealth) override {
        if (givenHealth < 0) {
            health = 0;
        }
        else if (givenHealth > 50) {
            health = 50;
        }
        else {
            health = givenHealth;
        }

        if (health <= 0) {
            cout << "The owner of " << shopName << " has died. You cruel person.\n";
            cout << "They dropped " << gold << " gold.\n";
            gold = 0;
        }
    }

    string getShopName() {
        return shopName;
    }

    shopkeep(string givenName = "", string givenShopName = "shop", int givenHealth = 10, int givenDamage = 4) {
        setName(givenName);
        setShopName(givenShopName);
        setHealth(givenHealth);
        setDamage(givenDamage);
    }
};

int main()
{
    barbarian bane("Bane", 22, 4);
    bane.SayHello();

    shopkeep dave("Todd", "Dave's Wares", 1, 1);

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

    cout << bane.getName() << " attacks " << huamn.getName() << " with a double swing!\n";
    bane.doubleSwingDamage(huamn);

    cout << huamn.getName() << " now has " << huamn.getHealth() << " points of health remaining!\n";

    cout << "Wait is that " << dave.getName() << " who works at " << dave.getShopName() << "? What is he doing here?\n\n";
    cout << ian.getName() << " attacks " << dave.getName() << " who appears to be lost!\n";
    dave.setHealth(dave.getHealth() - ian.getDamage());
}