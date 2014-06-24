#include "HelperMethods.h"

namespace utility
{
    /** 
     * This method splits a string based on the specified separator character
     * and returns a vector containing all the substrings that are extracted
     * @param aString the string to split
     * @param delimeter the character sequence to split the string by
     * @return a vector containing the resulting substrings
     */
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
    /**
     * This method removes quotes from a provided string
     * @param aString the string to remove quotes from
     * @return the string without the quotes
     */
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

    /**
     * This method removes spaces from a provided string
     * @param aString the string to remove spaces from
     * @return the string without spaces
     */
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

    /**
     * This method removes newline characters from a string
     * @param aString the string to remove newlines from
     * @return the string with no newline characters
     */
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

    /**
     * This method removes return characters from a string
     * @param aString the string to remove return characters from
     * @return the string with no return characters
     */
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

    /**
     * This method removes all special characters from a string
     * specifically it will remove quotes, spaces, new lines, and
     * return characters from the specified string
     * @param aString the string to remove characters from
     * @return the string without special characters
     */
    string stripAll(string aString)
    {
        string returnString = stripQuotes(aString);
        returnString = stripSpaces(returnString);
        returnString = stripNewLines(returnString);
        returnString = stripReturns(returnString);
        return returnString;
    }
};
