#include <iostream>
#include "stdio.h"

using namespace std;

#include "FileController.h"
using namespace controller;

int main( int argc, const char* argv[])
{
    FileController fileController = FileController("test.csv");
    cout << "Done." << endl;
    return 0;
}
