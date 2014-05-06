#include <iostream>
#include "stdio.h"

using namespace std;

#include "FileController.h"
using namespace controller;

#include "KeyTable.h"
#include "ValueTable.h"
using namespace model;

int main( int argc, const char* argv[])
{
    KeyTable keyTable = KeyTable();
    ValueTable valueTable = ValueTable();
    FileController fileController = FileController();
    fileController.insertKeys("test.csv", &keyTable);
    cout << "Done." << endl;
    return 0;
}
