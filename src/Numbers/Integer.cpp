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

bool Integer:: isInteger(const double value) {
    return std::floor(value) == value;
}

bool Integer:: isInteger(Number* n) {
    return dynamic_cast<Integer*>(n);
}

void Integer::print() const {
    Out::print(value);
}