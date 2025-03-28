/*Story()

- return type is void

AskYesNo()

- One string argument named "question"

- return type is bool

RollDie()

- one int parameter named "sides" with a default value of 6

- return type is int

Ending()

- return type is void

Adventure()

- return type is void or bool

- calls rollDie() for attack, block, & treasure

- tells the player their health after the encounter



obviously main()

- calls story,

-has a loop for adventure,

-checks for health

- calls ending()



Create the following global variables :

-health

- totalTreasure*/

#include <iostream>		// this sends and recieve text from the console
#include <string>		// allows the use of string variables
#include <ctime>		// allows the use of time
#include <cstdlib>      // allows the use of rand

using namespace std;

// global variables

int playerHP = 30;
int enemyHP = 10;
int pAttack, pBlock = 0;
int eAttack, eBlock = 0;
int totalTreasure = 0;

void Story() {
    cout << "You heard news from the tavern keeper that this cave holds treasure beyond compare. \n But, the cave is filled with monsters with no extent.\n";
    string input = "";
    cout << "Will you try your hand to get some of that treasure? (y/n)\n";
    getline(cin, input);
}

int RollDie(int sides = 6) {

    srand(time(0));


    sides = (rand() % 20) + 1;

    // used for calculating attack and treasure gain
    pAttack = (rand() % 10) + 1;
    eAttack = (rand() % 6) + 1;

    // blocking variables
    pBlock = (rand() % 6) + 1;
    eBlock = (rand() % 6) + 1;

    return 0;

}

bool AskYesNo(string question = "y/n") {
    string input = "";
    cout << "Will you continue forth? (y/n)\n";
    getline(cin, input);

    if (input == "n") {
        return false;
    }
    else if (input == "y"){
        return true;
    }
    else {
        cout << "Please select 'y' for yes or 'n' for no.\n";
    }
}

bool Adventure() {

    RollDie();
    cout << "Player Attacks!\n";
    if (pAttack > eBlock)
    {
        int pDamage = pAttack - eBlock;
        enemyHP -= pDamage;
        cout << "Current enemy Health: " << enemyHP << "\n";
    }
    else
    {
        cout << "Current Enemy Health: " << enemyHP << "\n";
    }

    // enemey's attack
    cout << "Enemy Attacks!\n";
    if (eAttack > pBlock)
    {
        int eDamage = eAttack - pBlock;
        playerHP -= eDamage;
        cout << "Current Player Health: " << playerHP << "\n";
    }
    else
    {
        cout << "Current Player Health: " << playerHP << "\n";
    }
    
    if (enemyHP <= 0)
    {
        enemyHP += 10;

        cout << "You gained " << RollDie(rand() % 20) + 1 << " pieces of treasure!\n";

        totalTreasure += RollDie(rand() % 20) + 1;

        cout << "You now have " << playerHP << " health and " << totalTreasure << " pieces of treasure!\n";
    }
    return true;
}

void Ending() {
    if (playerHP <= 0) {
        cout << "You have died due to your greed and lost all of your precious treasure.";
    }
    else if (playerHP <= 5 && playerHP > 0) {
        cout << "You barely made it out with " << totalTreasure << ". You should get to the closest temple to rest though.";
    }
    else if (playerHP > 30) {
        cout << "You cheated, your treasure turns to ashes and is whisked away in the wind for someone else to recieve.";
    }
    else {
        cout << "You made out with all " << totalTreasure << " piece(s) of treasure.";
    }
}
 
int main()
{
    cout << "Rules of the Game:\n";
    cout << "\tGreater block stops attacks\n";
    Story();
    while(Adventure() == true)  {
        if (playerHP <= 0) {
            Ending();
            break;
        }

        if (AskYesNo() == false) {
            Ending();
            break;
        }
    }
}