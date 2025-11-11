#ifndef OUT_H
#define OUT_H

#include <iostream>
#include <string>

using namespace std;

class Out {
    public:
        virtual void println(const string& line) = 0;
        virtual void print(const string& text) = 0;
        virtual void indent(int ammount) = 0;
};
#endif