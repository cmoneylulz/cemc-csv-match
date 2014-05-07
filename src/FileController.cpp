#include "FileController.h"

namespace controller
{
    FileController::FileController()
    {
        //Default Constructor
    }

    FileController::~FileController()
    {
        //Empty Deconstructor
    }
    
    bool FileController::validateFileName(const string& fileName)
    {
        vector<string> fileNameTokens;
        fileNameTokens = split(fileName, ".");
        if ( fileNameTokens.size() != 2 )
        {
            return false;
        } else if ( fileNameTokens[1] != "csv" ) {
            return false;
        } else {
            return true;
        }
    }

    void FileController::insertKeys(const string& fileName, KeyTable* keyTable)
    {
        if (validateFileName(fileName))
        {
            ifstream input(fileName.c_str());
            if (input.good())
            {
                string line;
                while (getline(input, line))
                {
                    keyTable->addKey(line);
                }
            } else {
                cout << "File Does Not Exist." << endl;
            }
        } else {
            cout << "Incorrect File Format." << endl;
        }
    }
    
    void FileController::insertValues(const string& fileName, ValueTable* valueTable)
    {
        if (validateFileName(fileName))
        {
            ifstream input(fileName.c_str());
            if (input.good())
            {
                string line;
                while (getline(input, line))
                {
                    //STRING PROCESSING HERE
                }
            } else {
                cout << "File Does Not Exist." << endl;
            }
        } else {
            cout << "Incorrect File Format." << endl;
        }
    }
};
