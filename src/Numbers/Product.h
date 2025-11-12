#ifndef PRODUCT_H
#define PRODUCT_H

#include "Number.h"

class Product : public Number {
    private:
        Number* a;
        Number* b;
    public:
        Product(Number* a, Number* b);
        ~Product();
        double getValue() const override;
        void setValue(Number* a, Number* b);
        Number* solve();
        void print() const override;
};

#endif