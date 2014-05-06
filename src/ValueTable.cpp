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

};
