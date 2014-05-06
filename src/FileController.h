#ifndef FILECONTROLLER_H_
#define FILECONTROLLER_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "HelperMethods.h"

using namespace utility;

#include "KeyTable.h"

using namespace model;

namespace controller
{
    class FileController
    {
    private:
        string fileName;

        bool validateFileName();
        void readCSV();
    public:
        FileController(const string& fileName);
        virtual ~FileController();
        
        void insertKeys(KeyTable* keyTable);
    };
}

#endif
