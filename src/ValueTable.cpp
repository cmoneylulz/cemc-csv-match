#include "ValueTable.h"

namespace model
{
    /**
     * Default constructor for the ValueTable class
     */
    ValueTable::ValueTable()
    {
        this->valueMap = new map<string, vector<string> >();    
    }

    /**
     * Default destructor for the ValueTable class
     */
    ValueTable::~ValueTable()
    {
        delete this->valueMap;
    }

    /**
     * This method adds a new entry to the value table
     * @param key the key for the new entry
     * @param value the value for the new entry
     */
    void ValueTable::addValue(const string& key, vector<string> valueList)
    {
        this->valueMap->insert(pair<string, vector<string> >(key, valueList));
    }

    /**
     * This method prints all values in the value table
     */
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

    /**
     * This method is a helper method for print values, it prints all entries in a vector
     */
    void ValueTable::printVector(vector<string> aVector)
    {
        for (vector<string>::const_iterator it = aVector.begin(); it != aVector.end(); ++it)
        {
            string value = *it;
            cout << value << ", ";
        }
        cout << endl;
    }

    /**
     * Accessor for the list of values stored by this model
     * @return the valueMap
     */
    map<string, vector<string> >* ValueTable::getValues()
    {
        return this->valueMap;
    }
    
    /**
     * Accessor for the list of headers (Column Names) for csv files
     * @return the list of headrs
     */
    vector<string>* ValueTable::getHeaders()
    {
        return this->headers;
    }

    /**
     * Mutator for the list of headers for csv files
     * param headers a pointer to the list of headers
     */
    void ValueTable::setHeaders(vector<string>* headers)
    {
        this->headers = headers;
    }

};
