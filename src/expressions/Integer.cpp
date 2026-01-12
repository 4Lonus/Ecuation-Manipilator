#include "Integer.h"






/*	CONSTRUCTOR	*/
Integer::Integer(int value) : value(value) {}

std::shared_ptr<const Integer> Integer::create(int value) {
	return std::shared_ptr<const Integer>(new Integer(value));
}





/*	METHODS	*/
float Integer::approximate() const {
	return value;
}

bool Integer::equals(std::shared_ptr<const Expression> comparator) const {
	auto simplifiedComparator = comparator->simplify();
	auto integer = std::dynamic_pointer_cast<const Integer>(simplifiedComparator);

	if (!integer) return false;
	return value == integer->getValue();
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