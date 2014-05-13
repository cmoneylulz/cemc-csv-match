#include "KeyMatch.h"

namespace controller
{
    KeyMatch::KeyMatch()
    {
        this->fileController = new FileController();
        this->keyTable = new KeyTable();
        this->valueTable = new ValueTable();
    }

    KeyMatch::~KeyMatch()
    {
        //TODO: add complete destructors
    }
}
