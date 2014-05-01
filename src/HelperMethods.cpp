#include "HelperMethods.h"

namespace utility
{
    vector<string> split(string aString, string delimeter)
    {
        int start = 0;
        int end;
        vector<string> stringTokens;

        while( (end = aString.find(delimeter, start)) != string::npos)
        {
            stringTokens.push_back(aString.substr(start, end - start));
            start = end + delimeter.length();
        }
        stringTokens.push_back(aString.substr(start));
        return stringTokens;
    }
};
