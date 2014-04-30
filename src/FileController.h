#ifndef FILECONTROLLER_H_
#define FILECONTROLLER_H_

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

namespace controller
{
    class FileController
    {
    private:
        string fileName;
    public:
        FileController(const string& fileName);
        virtual ~FileController();
    };
}

#endif
