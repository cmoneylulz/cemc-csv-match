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
};
