#include <iostream>
#include "stdio.h"

using namespace std;

#include "FileController.h"
using namespace controller;

#include "KeyTable.h"
using namespace model;

int main( int argc, const char* argv[])
{
    KeyTable keyTable = KeyTable();
    FileController fileController = FileController("test.csv");
    fileController.insertKeys(&keyTable);
    cout << "Done." << endl;
    return 0;
}
