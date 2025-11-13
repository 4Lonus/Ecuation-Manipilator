#ifndef PRODUCT_H
#define PRODUCT_H

#include "Composed.h"

class Product : public Composed {
    private:
        Number* a;
        Number* b;
    public:
        Product(Number* a, Number* b);
        ~Product();

        double getValue() const override;
        void setValue(Number* a, Number* b);
        Number* solve() override;
        bool isAtomic() const override;
        
        void print() const override;
};

#endif