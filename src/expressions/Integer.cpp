#include "Integer.h"


/*	CONSTRUCTORS / DESTRUCTORS	*/
Integer::Integer(int value) : value(value) {}

Integer::~Integer() = default;


/*	METHODS	*/
float Integer::getValue() const {
	return value;
}

bool Integer::isExact() const {
	return true;
}

Expression* Integer::simplify() const {
	return new Integer(value);
}