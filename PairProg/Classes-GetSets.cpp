// Classes-GetSets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class robot {
private:
    // data members
    string name;
    string phrase;  // phrases have punctuation
    int charge = 10;
    int maxCharge = 200;
    int minCharge = 0;
   
public:
    // member function declaration
    robot(string, string, int);
    robot();
    void SayHello();

    // setters will always have an input parameter
    void setCharge(int givenCharge) {
        if (givenCharge < 0) {
            charge = 0;
        }
        else if (givenCharge > 100) {
            charge = 100;
        }
        else {
            charge = givenCharge;
        }
    }

    void changeCharge(int by = 1) {
        charge += by;
        setCharge(charge);
    }
    
    // getters will always have a return type
    int getCharge() {
        return charge;
    }

    void setName(string givenName) {
        if (givenName.size() < 2) {
            cout << "The name is too short.\n";
            return;
        }
        else if (givenName.size() > 20) {
            cout << "The name is tooo looooooong.\n";
            return;
        }
        else {
            name = givenName;
        }
    }

    string getName() {
        return name;
    }

protected:
};


// member function definition
// constructor: has to be named same as the class, without a return type
robot::robot(string givenName, string givenPhrase, int givenCharge) {
    // asigns the instance's variables to the given values
    name = givenName;
    phrase = givenPhrase;
    charge = givenCharge;

    // Lets us know that a new robot has been constructed
    cout << "A new robot has been constructed!\n";
}

// overloading the constructor with a "default" constructor
robot::robot() {
    cout << "Using the DEFAULT constructor.\n";
    cout << "Hey programmer DEAN, please fix this in the source code.\n";
}

void robot::SayHello() {
    cout << "My name is " << name << " and my charge is " << charge << ".\n";
    cout << phrase << "";
}

int main()
{
    cout << "Classes, yeah!\n";

    robot bobert;
    bobert.setName("Bobert Junior");
    bobert.setCharge(5);

    cout << "Have a look at my new robot. Their name is " << bobert.getName() << ".\n";
    cout << "I am currently charging them, their current charge is " << bobert.getCharge() << ".\n";\

    bobert.changeCharge(50);
    cout << "two hours later, Bobert's charge is now " << bobert.getCharge() << ".\n";


    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robot was very expensive! They work on my nuclear reactor.\n";
    cout << "Their name is " << rob.getName() << " and their charge is " << rob.getCharge() << ".\n";
    cout << "They can introduce themselves, watch!\n";
    rob.changeCharge(-200); // sapped by the nuclear reactor
    rob.SayHello();

    bobert.SayHello();
}
