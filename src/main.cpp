#include <iostream>
#include "stdio.h"

using namespace std;

#include "FileController.h"
#include "KeyMatch.h"
using namespace controller;

#include "ValueTable.h"
using namespace model;

int main( int argc, const char* argv[])
{
    if (!argv[1] == 0 && !argv[2] == 0) {
        KeyMatch keyMatch = KeyMatch(argv[1], argv[2], 0, 0); //so nothing crashes for now
    } else {
        cout << "Invalid or no file names entered as arguments." << endl;
    }
    cout << "Done." << endl;
    return 0;
}
