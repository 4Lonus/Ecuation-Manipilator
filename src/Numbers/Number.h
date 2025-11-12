#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Number {
    public:
        virtual double getValue() const = 0;
        virtual void print() const = 0;
        virtual ~Number() = default;
};

#endif