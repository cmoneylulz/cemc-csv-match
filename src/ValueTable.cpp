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
            cout << key << ":" <<endl;
            this->printVector(valueList);
        }
    }

    void ValueTable::printVector(vector<string> aVector)
    {
        for (vector<string>::const_iterator it = aVector.begin(); it != aVector.end(); ++it)
        {
            string value = *it;
            cout << value << ", ";
        }
        cout << endl;
    }

    map<string, vector<string> >* ValueTable::getValues()
    {
        return this->valueMap;
    }

};
