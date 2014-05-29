#ifndef HELPERMETHODS_H_
#define HELPERMETHODS_H_

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

namespace utility
{
    vector<string> split(string aString, string delimeter);
    string stripQuotes(string aString);
    string stripSpaces(string aString);
    string stripNewLines(string aString);
    string stripReturns(string aString);
    string stripAll(string aString);
}

#endif
