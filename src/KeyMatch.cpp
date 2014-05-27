#include "KeyMatch.h"

namespace controller
{
    KeyMatch::KeyMatch(const string& firstFile, const string& secondFile, int firstKey, int secondKey)
    {
        this->fileController = new FileController();
        this->firstTable = new ValueTable();
        this->secondTable = new ValueTable();

        this->fileController->insertValues(firstFile, this->firstTable, firstKey);
        this->fileController->insertValues(secondFile, this->secondTable, secondKey);
        
        this->matchFiles();
    }

    KeyMatch::~KeyMatch()
    {
        //TODO: add complete destructors
    }

    void KeyMatch::matchFiles()
    {
        for (map<string, vector<string> >::const_iterator it = this->firstTable->getValues()->begin(); it != this->firstTable->getValues()->end(); ++it)
        {
            string key = it->first;
            vector<string> values = it->second;
            map<string, vector<string> >::iterator it2 = this->secondTable->getValues()->find(key);
            cout << &it2->first << endl; //DIAGNOSTIC PRINT REMOVE LATER
            vector<string> values2 = it2->second;
            if (it2 != this->secondTable->getValues()->end())
            {
                //MATCH FOUND
                cout << "FOUND MATCH" << endl;
            }
            else
            {
                cout << "NO MATCH" << endl;
            }
        }
    }

    vector<string>* KeyMatch::join(const vector<string>& vector1, const vector<string>& vector2)
    {
        vector<string>* newValueList = new vector<string>();
        return newValueList;
    }

}
