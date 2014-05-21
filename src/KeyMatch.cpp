#include "KeyMatch.h"

namespace controller
{
    KeyMatch::KeyMatch(const string& firstFile, const string& secondFile, int firstKey, int secondKey)
    {
        this->fileController = new FileController();
        this->firstTable = new ValueTable();
        this->secondTable = new ValueTable();

        this->fileController->insertValues(firstFile, this->firstTable);
        this->fileController->insertValues(secondFile, this->secondTable);
        
        this->matchFiles();
    }

    KeyMatch::~KeyMatch()
    {
        //TODO: add complete destructors
    }

    void KeyMatch::matchFiles()
    {
        //TODO: reimplement
    }
}
