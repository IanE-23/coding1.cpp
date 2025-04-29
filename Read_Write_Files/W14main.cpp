// Week 14, last class of C++

#include "filemgmt.h"               // import the extra functions that we created
#include "item.h"
using namespace std;                

// read array from file. that's homework
// lets talk about header files and other source files

// inclass assignment:
// in a new source file (.cpp) and whith a header file (.h)
// create a new class named item with the following variables and functions
    // string name, enum location, item(), use(), examine()

int main()
{
    cout << "Play Ocarina of Time.\n";
    
    ReadFromFile();
    WriteToFile();

    //create an array of strings named favorites
    // let the user add as many as they like (up to 100)
    // save those favorites to a file
    string favs[100];
    int nextIndex = 0;

    cout << "Type out your favorites, or type 'done' to stop. \n";
    while (true) {
        string input;
        cout << ">> ";
        getline(cin, input);

        if (input == "done") {
            break;
        }
        favs[nextIndex] = input;
        nextIndex++;
    }

    WriteArrrayToFile(favs, nextIndex);
    ReadArrayFromFile();

    item itemArray[5];
    item pickaxe("Diamond Pickaxe\n");
    item ctable("Crafting Table\n");
    item ePearl("Ender Pearl\n");
    item sword("Diamond Sword\n");
    item stairs("Waxed Lightly Weathered Cut Copper Stairs\n");

    itemArray[0] = pickaxe;
    itemArray[1] = ctable;
    itemArray[2] = ePearl;
    itemArray[3] = sword;
    itemArray[4] = stairs;

    pickaxe.use();

    for (int i = 0; i < 5; i++) {
        cout << itemArray[i].name;
        itemArray[i].examine();
    }
}