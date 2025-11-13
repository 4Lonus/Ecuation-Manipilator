#ifndef QUOTIENT_H
#define QUOTIENT_H

#include "Composed.h"

class Quotient : public Composed {
    private:
        Number* numerator;
        Number* denominator;    
    public:
        Quotient(Number* numerator, Number* denominator);
        ~Quotient();

        double getValue()const override;
        void setValue(Number* numberator, Number* denominator);
        Number* solve() override;
        bool isAtomic() const override;

        void print();
};

#endif