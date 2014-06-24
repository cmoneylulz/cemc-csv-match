#include "FileController.h"

namespace controller
{
    /**
     * Default Constructor for the FileController class
     */
    FileController::FileController()
    {
        //Default Constructor
    }
    
    /**
     * Default Destructor for the FileController class
     */
    FileController::~FileController()
    {
        //Empty Deconstructor
    }
    
    /**
     * This method is used to validate the file name of the provided csv file
     * @param fileName the name of the file provided by the user
     * @return true if the file is a valid csv file
     */
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
    
    /**
     * This method inserts values into the specified value table
     * @param fileName the fileName of the csv file
     * @param valueTable the value table to insert into
     * @param keyIndex the column index to use as the match criteria
     */
    void FileController::insertValues(const string& fileName, ValueTable* valueTable, int keyIndex)
    {
        if (validateFileName(fileName))
        {
            ifstream input(fileName.c_str());
            if (input.good())
            {
                string line;
                getline(input, line); //skip the first line with all the headers TODO ERROR CHECKING
                while (getline(input, line))
                {
                    stringstream lineStream(line);
                    string cell;
                    vector<string> values;
                    while (getline(lineStream, cell, ','))
                    {
                        values.push_back(stripAll(cell));
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

    /**
     * This method is used to write data to a specified output csv file
     * @param fileName the csv filename
     * @param value the value to write
     */
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
