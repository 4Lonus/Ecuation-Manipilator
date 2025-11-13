#include "Integer.h"
#include "../util/Out.h"
#include <cmath>

Integer::Integer(const int value) : value(value) {}

double Integer::getValue() const {
    return value;
}

void Integer::setValue(const int value) {
    this->value = value;
}

bool Integer::isInteger(const double value) {
    return std::floor(value) == value;
}

bool Integer::isInteger(Number* n) {
    return
        isClassInteger(n) || // If the object is Integer
        isInteger(n->getValue()); // Or if the value is integer.
}

bool Integer::isClassInteger(Number* n) {
    return dynamic_cast<Integer*>(n);
}

bool Integer::isAtomic() const {
    return false;
}

void Integer::print() const {
    Out::print(value);
}