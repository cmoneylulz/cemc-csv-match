#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "FileController.h"
#include "KeyMatch.h"
using namespace controller;

#include "ValueTable.h"
using namespace model;

int main( int argc, const char* argv[])
{
    //TODO: Check to see if argcount == 4
    //TODO: Check if arg 3 & 4 are integers
    //TODO: Check for invalid input
    if (!argv[1] == 0 && !argv[2] == 0) {
        KeyMatch keyMatch = KeyMatch(argv[1], argv[2], atoi(argv[3]), atoi(argv[4]));
    } else {
        cout << "Invalid or no file names entered as arguments." << endl;
    }
    cout << "Done." << endl;
    return 0;
}
