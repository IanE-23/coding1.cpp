/*welcome the player $$
set up the game
int health = 10, attack, block, turns = 0 $$
seed the random number generator $$
start the loop
add 1 to turns $$
start the encounter
randomly generate numbers for attack(range = 0 - 4) and block(range = 0 - 4)
if block is greater or equal to attack, successful block $$
otherwise, subtract attack value from health. $$
ask the player if they would like to keep adventuring. if they don't, break out of the loop.
keep looping while health is greater than zero and fewer than 4 turns have happened

if health is greater than 0, congratulate player
otherwise, tell the player they're dead.*/

#include <iostream>		// this sends and recieve text from the console
#include <string>		// allows the use of string variables
#include <ctime>		// allows the use of time
#include <cstdlib>      // allows the use of rand

using namespace std;

int main()
{
    srand(time(0));

    // block of integer variables
    int playerHP = 10;
    int enemyHP = 10;
    int pAttack, pBlock = 0;
    int eAttack, eBlock = 0;
    int turn = 0;
    int encounter = 0;

    // block of string variables
    string input = "";

    // Welcomes the player to the game
     cout << "Welcome to RPG Battle Simulator\n";
     cout << "Rules of the Game:\n";
     cout << "\t4 turns per encounter\n \tGreater block stops attacks\n";
     cout << "\tPlayer will restore 3 HP with each successful encounter\n";

    while (playerHP >= 0)        // proceeds the game
    {
        turn += 1;
        
        // attacking variables
        pAttack = (rand() % 4) + 1;
        eAttack = (rand() % 4) + 1;
        
        // blocking variables
        pBlock = (rand() % 4) + 1;
        eBlock = (rand() % 4) + 1;
        
        // player's attack
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

        if (enemyHP == 0) 
        {
            cout << "Continue? (y/n)\n";
            cin >> input;
            encounter += 1;
            if (input == "n") 
            {
                cout << "Thanks for playing!\n";
            }
            enemyHP = 10;
            playerHP += 3;
        } 
        
        // Comment out for unlimited turns
        if (turn == 4)              // adds a turn limit to encounters
        {
            cout << "You ran out of turns!\n";
            cout << "Thanks for playing!\n";
            break;

        }
    
        if (playerHP <= 0)          // ends the game
        {
            cout << "You have died.\n";
            cout << "You made it " << encounter << " stages far!\n";
            break;
        }
    }
    
   

}