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
        
        this->matchFiles();
    }

    KeyMatch::~KeyMatch()
    {
        //TODO: add complete destructors
    }

    void KeyMatch::matchFiles()
    {
        for (vector<string>::const_iterator it = this->keyTable->getKeys()->begin(); it != this->keyTable->getKeys()->end(); ++it)
        {
            string key = *it;
            for (map<string, vector<string> >::const_iterator it2 = this->valueTable->getValues()->begin(); it2 != this->valueTable->getValues()->end(); ++it2)
            {
                string valueKey = it2->first;
                //TODO: Extract later
                if (key == valueKey)
                {
                    cout << "KEY FOUND" << endl;
                }
            }
        }
    }
}
