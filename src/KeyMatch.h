#ifndef KEYMATCH_H_
#define KEYMATCH_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

#include "HelperMethods.h"

using namespace utility;

#include "KeyTable.h"
#include "ValueTable.h"

using namespace model;

#include "FileController.h"

namespace controller
{
    class KeyMatch
    {
    private:
        FileController* fileController;
        KeyTable* keyTable;
        ValueTable* valueTable;
    public:
        KeyMatch(const string& keyFileName, const string& valueFileName);
        virtual ~KeyMatch();
    };
}

#endif
