#ifndef KEYTABLE_H_
#define KEYTABLE_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#include "HelperMethods.h"

using namespace utility;

namespace model 
{
    class KeyTable
    {
    private:
        vector<string> *keyList;
    public:
        KeyTable();
        virtual ~KeyTable();

        vector<string>* getKeys();
        void addKey(const string& key);
    };
}

#endif
