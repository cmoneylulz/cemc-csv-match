#ifndef KEYMATCH_H_
#define KEYMATCH_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

#include "HelperMethods.h"

using namespace utility;

#include "ValueTable.h"

using namespace model;

#include "FileController.h"

namespace controller
{
    class KeyMatch
    {
    private:
        FileController* fileController;
        ValueTable* firstTable;
        ValueTable* secondTable;
        
        void matchFiles();
        void join(const vector<string>& vector1, map<string, size_t>& results);
        void printMatch(map<string, size_t> match);
    public:
        KeyMatch(const string& firstFile, const string& secondFile, int firstKey, int secondKey);
        virtual ~KeyMatch();
        
    };
}

#endif
