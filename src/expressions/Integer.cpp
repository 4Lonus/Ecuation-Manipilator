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
	return *integer == value;
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

// Explicit Conversions
Integer::operator int() const {
	return value;
}

Integer::operator long() const {
	return value;
}





/*	MATH OPERATORS OVERLOAD	*/
//	+	(Addition)
std::shared_ptr<const Integer> Integer::operator+(const Integer& other) const {
	return operator+(other.getValue());
}

std::shared_ptr<const Integer> Integer::operator+(const int other) const {
	if (other == 0) return this->shared_from_this();
	return create(value + other);
}


//	-	(Subtraction)
std::shared_ptr<const Integer> Integer::operator-(const Integer& other) const {
	return operator-(other.getValue());
}

std::shared_ptr<const Integer> Integer::operator-(const int other) const {
	if (other == 0) return this->shared_from_this();
	return create(value - other);
}


//	*	(Multiplication)
std::shared_ptr<const Integer> Integer::operator*(const Integer& other) const {
	return operator*(other.getValue());
}

std::shared_ptr<const Integer> Integer::operator*(const int other) const {
	if (other == 1) return this->shared_from_this();
	return create(value * other);
}


//	/	(Division)
std::shared_ptr<const Integer> Integer::operator/(const Integer& other) const {
	return operator/(other.getValue());
}

std::shared_ptr<const Integer> Integer::operator/(const int other) const {
	if (other == 0) throw std::invalid_argument("Denominator shall not be 0.");
	if (other == 1) return this->shared_from_this();
	// This is loseefull
	return create(value / other);
}





/*	COMPARATORS OVERLOAD	*/
//	== (Equals)
bool Integer::operator==(const Integer& other) const {
	return operator==(other.getValue());
}

bool Integer::operator==(const int other) const {
	return value == other;
}


//	!=	(Differs)
bool Integer::operator!=(const Integer& other) const {
	return operator!=(other.getValue());
}

bool Integer::operator!=(const int other) const {
	return value != other;
}


//	<	(Less Than)
bool Integer::operator<(const Integer& other) const {
	return operator<(other.getValue());
}

bool Integer::operator<(const int other) const {
	return value < other;
}


//	<=	(Less Or Equal To)
bool Integer::operator<=(const Integer& other) const {
	return operator<=(other.getValue());
}

bool Integer::operator<=(const int other) const {
	return value <= other;
}


//	>	(Greater Than)
bool Integer::operator>(const Integer& other) const {
	return operator>(other.getValue());
}

bool Integer::operator>(const int other) const {
	return value > other;
}


//	>=	(Greater Or Equal To)
bool Integer::operator>=(const Integer& other) const {
	return operator>=(other.getValue());
}

bool Integer::operator>=(const int other) const {
	return value >= other;
}