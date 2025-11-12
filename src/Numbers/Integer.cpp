#include "Integer.h"
#include "../util/Out.h"

Integer::Integer(const int value) : value(value) {}

double Integer::getValue() const {
    return value;
}

void Integer::setValue(const int value) {
    this->value = value;
}

void Integer::print() const {
    Out::print(value);
}