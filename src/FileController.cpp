#include "FileController.h"

namespace controller
{
    FileController::FileController(const string& fileName)
    {
        this->fileName = fileName;
        if(this->validateFileName())
        {
            this->readCSV();
        }
    }

    FileController::~FileController()
    {
        //Empty Deconstructor
    }
    
    bool FileController::validateFileName()
    {
        vector<string> fileNameTokens;
        fileNameTokens = split(this->fileName, ".");
        if ( fileNameTokens.size() != 2 )
        {
            return false;
        } else if ( fileNameTokens[1] != "csv" ) {
            return false;
        } else {
            return true;
        }
    }

    void FileController::insertKeys(KeyTable* keyTable)
    {
        ifstream input(this->fileName.c_str());
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
    }

    void FileController::readCSV()
    {
        ifstream input(fileName.c_str());
        if (input.good())
        {
            string line;
            while (getline(input, line))
            {
                cout << line << endl;
            }
        } else {
            cout << "File Does Not Exist." << endl;
        }
    }
};
