#include "FileController.h"

namespace controller
{
    FileController::FileController(const string& fileName)
    {
        this->fileName = fileName;
        this->validateFileName();
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
};
