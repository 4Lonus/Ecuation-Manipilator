#ifndef INTEGER_H
#define INTEGER_H

#include "Number.h"

class Integer : public Number {
    private:
        int value;
    public:
        Integer(int value);
        double getValue() const override;
        void setValue(int value);
        void print() const override;
};

#endif