#include "FileController.h"

namespace controller
{
    FileController::FileController(const string& fileName)
    {
        this->fileName = fileName;
    }

    FileController::~FileController()
    {
        //Empty Deconstructor
    }
    
    bool FileController::validateFileName()
    {
        vector<string> fileNameTokens;
        fileNameTokens = split(this->fileName, ".");
        return true;
    }

    vector<string> FileController::split(string aString, string delimeter)
    {
        unsigned start = 0;
        unsigned end;
        vector<string> stringTokens;

        while( (end = aString.find(delimeter, start)) != string::npos )
        {
            stringTokens.push_back(aString.substr(start, end - start));
            start = end + delimeter.length();
        }
        stringTokens.push_back(aString.substr(start));
        return stringTokens;
    }
};
