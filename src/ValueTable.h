#ifndef VALUETABLE_H_
#define VALUETABLE_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include <map>

using namespace std;

#include "HelperMethods.h"

using namespace utility;

namespace model 
{
    class ValueTable
    {
    private:
        map<string, vector<string> >* valueMap;
        vector<string>* headers;

        void printVector(vector<string> aVector);
    public:
        ValueTable();
        virtual ~ValueTable();

        void addValue(const string& key, vector<string> valueList);
        void printValues();
        map<string, vector<string> >* getValues();
        vector<string>* getHeaders();
        void setHeaders(vector<string>* headers);
    };
}

#endif
