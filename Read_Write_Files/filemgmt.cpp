#include "filemgmt.h"
using namespace std;

void ReadFromFile() {
    // this string will hold what the file contains
    string fileContents;

    // open the file
    ifstream file("file.txt");

    // for each line in the file, add it to the string
    while (getline(file, fileContents)) {
        cout << fileContents;
    }

    // cloes the file
    file.close();
}

void WriteArrrayToFile(string* arr, int size) {
    ofstream file("favs.txt");          // opens/creates the file

    if (!file.is_open()) {
        return;
    }

    for (int i = 0; i < size; i++) {    // for each line in the array, add a line to the file 
        file << arr[i] << "\n";
    }

    file.close();                       // closes the file and saves to hard drive
}

void WriteToFile() {
    //opening the "file.txt" file, creates it if it does not exist
    ofstream file("file.txt");

    // write a line to the file... well, to the buffer of the open file
    file << "Play Ocarina of Time!\n";

    // close the file (saves it to disk)
    file.close();
}

void ReadArrayFromFile() {
    // this string will hold what the file contains
    string fileContents;

    // open the file
    ifstream file("favs.txt");

    // for each line in the file, add it to the string
    while (getline(file, fileContents)) {
        cout << fileContents;
    }

    // cloes the file
    file.close();
}