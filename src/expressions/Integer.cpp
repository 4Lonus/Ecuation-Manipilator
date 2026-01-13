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





/*	MATH OPERATORS OVERLOAD	*/
//	+	(Addition)
int Integer::operator+(const Integer& other) const {
	return operator+(other.getValue());
}

int Integer::operator+(const int other) const {
	return value + other;
}


//	-	(Subtraction)
int Integer::operator-(const Integer& other) const {
	return operator-(other.getValue());
}

int Integer::operator-(const int other) const {
	return value - other;
}


//	*	(Multiplication)
int Integer::operator*(const Integer& other) const {
	return operator*(other.getValue());
}

int Integer::operator*(const int other) const {
	return value * other;
}


//	/	(Division)
int Integer::operator/(const Integer& other) const {
	return operator/(other.getValue());
}

int Integer::operator/(const int other) const {
	if (other == 0) throw std::invalid_argument("Denominator shall not be 0.");
	else return value / other;
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