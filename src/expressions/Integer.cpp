#include "Integer.h"


/*	CONSTRUCTOR	*/
Integer::Integer(int value) : value(value) {}

std::shared_ptr<Integer> Integer::create(int value) {
	return std::shared_ptr<Integer>(new Integer(value));
}


/*	METHODS	*/
float Integer::aproximate() const {
	return value;
}

bool Integer::equals(std::shared_ptr<Expression> comparator) const {
	auto integer = std::dynamic_pointer_cast<Integer>(comparator);
	if (!integer) return false;

	return value == integer.get()->getValue();
}

std::shared_ptr<const Expression> Integer::simplify() const {
	return this->shared_from_this();
}

std::string Integer::toString() const {
	return std::to_string(value);
}

int Integer::getValue() const {
	return value;
}