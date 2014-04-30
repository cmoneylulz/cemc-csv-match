#ifndef FILECONTROLLER_H_
#define FILECONTROLLER_H_

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

namespace controller
{
    class FileController
    {
    private:
        string fileName;

        bool validateFileName();
        vector<string> split(string aString, string delimeter);
    public:
        FileController(const string& fileName);
        virtual ~FileController();
    };
}

#endif
