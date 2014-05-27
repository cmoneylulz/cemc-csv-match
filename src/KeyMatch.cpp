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
            
            cout << "created values2" << endl;
            if (it2 != this->secondTable->getValues()->end())
            {
                //MATCH FOUND
                cout << "FOUND MATCH" << endl;
                vector<string> values2 = it2->second;
                vector<string> match = vector<string>();
                this->join(values, match);
                this->join(values2, match);
            }
            else
            {
                cout << "NO MATCH" << endl;
            }
        }
    }

    void KeyMatch::join(const vector<string>& vector1, vector<string> vector2)
    {
        for (vector<string>::const_iterator it = vector1.begin(); it != vector1.end(); ++it)
        {
            string key = *it; 
           
            if (find(vector2.begin(), vector2.end(), key) != vector2.end())
            {
                cout << "ITEM EXISTS" << endl;
            }
            else
            {
                vector2.push_back(key);
                cout << key << " added." << endl;
            }
        }              
    }

}
