#ifndef INTEGER_H
#define INTEGER_H

#include "Number.h"

class Integer : public Number {
    private:
        int value;
    public:
        Integer(int value);
        ~Integer();
        
        double getValue() const override;
        void setValue(int value);
        static bool isInteger(const double value);
        static bool isInteger(Number* n);

        void print() const override;
};

#endif