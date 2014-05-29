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
    
    //TODO ERROR CHECKING HERE
    string stripQuotes(string aString)
    {
        vector<string> stringTokens = split(aString, "\"");
        string returnString = stringTokens[0];
        if (returnString.empty())
        {
            return aString;
        }
        else
        {
            return stringTokens[0];
        }
    }

    string stripSpaces(string aString)
    {
        vector<string> stringTokens = split(aString, "  ");
        string returnString = stringTokens[0];
        if (returnString.empty())
        {
            return aString;
        }
        else
        {
            return returnString;
        }
    }

    string stripNewLines(string aString)
    {
        vector<string> stringTokens = split(aString, "\n");
        string returnString = stringTokens[0];
        if (returnString.empty())
        {
            return aString;
        }
        else
        {
            return returnString;
        }
    }

    string stripReturns(string aString)
    {
        vector<string> stringTokens = split(aString, "\r");
        string returnString = stringTokens[0];
        if (returnString.empty())
        {
            return aString;
        }
        else
        {
            return returnString;
        }
    }



    string stripAll(string aString)
    {
        string returnString = stripQuotes(aString);
        returnString = stripSpaces(returnString);
        returnString = stripNewLines(returnString);
        returnString = stripReturns(returnString);
        return returnString;
    }
};
