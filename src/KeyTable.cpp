#include "KeyTable.h"

namespace model
{
    KeyTable::KeyTable()
    {
        this->keyList = new vector<string>(); 
    }

    KeyTable::~KeyTable()
    {
        delete this->keyList;
    }

    vector<string>* KeyTable::getKeys()
    {
        return this->keyList;
    }

    void KeyTable::addKey(const string& key)
    {
        this->keyList->push_back(key);
    }
};
