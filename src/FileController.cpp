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
    
    void FileController::insertValues(const string& fileName, ValueTable* valueTable, int keyIndex)
    {
        if (validateFileName(fileName))
        {
            ifstream input(fileName.c_str());
            if (input.good())
            {
                string line;
                while (getline(input, line))
                {
                    stringstream lineStream(line);
                    string cell;
                    vector<string> values;
                    while (getline(lineStream, cell, ','))
                    {
                        values.push_back(cell);
                    }
                    valueTable->addValue(values[keyIndex], values);
                }
            } else {
                cout << "File Does Not Exist." << endl;
            }
        } else {
            cout << "Incorrect File Format." << endl;
        }
    }

    void FileController::writeValue(const string& fileName, const string& value)
    {
        if (validateFileName(fileName))
        {
            ofstream aFile;
            aFile.open(fileName.c_str(), ios::app);
            aFile << value << endl;
        }
    }
};
