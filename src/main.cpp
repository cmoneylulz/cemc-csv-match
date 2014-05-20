#include <iostream>
#include "stdio.h"

using namespace std;

#include "FileController.h"
#include "KeyMatch.h"
using namespace controller;

#include "KeyTable.h"
#include "ValueTable.h"
using namespace model;

int main( int argc, const char* argv[])
{
    KeyTable keyTable = KeyTable();
    ValueTable valueTable = ValueTable();
    FileController fileController = FileController();
    fileController.insertKeys("keys.csv", &keyTable);
    fileController.insertValues("values.csv", &valueTable);
    valueTable.printValues();
    KeyMatch keyMatch = KeyMatch(argv[1], argv[2]);
    cout << "Done." << endl;
    return 0;
}
