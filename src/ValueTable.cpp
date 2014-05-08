#include "ValueTable.h"

namespace model
{
    ValueTable::ValueTable()
    {
        this->valueMap = new map<string, vector<string> >();    
    }

    ValueTable::~ValueTable()
    {
        delete this->valueMap;
    }

    void ValueTable::addValue(const string& key, vector<string> valueList)
    {
        this->valueMap->insert(pair<string, vector<string> >(key, valueList));
    }

    void ValueTable::printValues()
    {
        for (map<string, vector<string> >::const_iterator it = this->valueMap->begin(); it != this->valueMap->end(); ++it)
        {
            string key = it->first;
            vector<string> valueList = it->second;
            cout << key << endl;
        }
    }

};
