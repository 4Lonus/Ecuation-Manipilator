#include <iostream>

class Out {
    public:
        virtual void println(std::string line) = 0;
        virtual void print(std::string text) = 0;
};