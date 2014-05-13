#include "KeyMatch.h"

namespace controller
{
    KeyMatch::KeyMatch(const string& keyFileName, const string& valueFileName)
    {
        this->fileController = new FileController();
        this->keyTable = new KeyTable();
        this->valueTable = new ValueTable();

        this->fileController->insertKeys(keyFileName, this->keyTable);
        this->fileController->insertValues(valueFileName, this->valueTable);
    }

    KeyMatch::~KeyMatch()
    {
        //TODO: add complete destructors
    }
}
