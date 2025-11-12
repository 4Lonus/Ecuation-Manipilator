#ifndef COMPOSED_H
#define COMPOSED_H

#include "Number.h"

class Composed : public Number {
    public:
        virtual ~Composed () = default;
        virtual Number* solve() = 0;
};


#endif