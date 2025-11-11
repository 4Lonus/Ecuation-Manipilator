#ifndef OUT_H
#define OUT_H

#include <string>
using namespace std;

class Out {
    public:
        static void println(const string& line);
        static void print(const string& text);
        static void indent(const int ammount);
};
#endif