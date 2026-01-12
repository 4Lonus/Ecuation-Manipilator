#include "Rational.h"
#include "Integer.h"





/*	CONSTRUCTOR / DESTRUCTOR	*/
//	Private Constructor
Rational::Rational(std::shared_ptr<const Integer> numerator, std::shared_ptr<const Integer> denominator) : numerator (numerator), denominator(denominator) {}

//	Constructor with two Integers
std::shared_ptr<const Expression> Rational::create(std::shared_ptr<const Integer> numerator, std::shared_ptr<const Integer> denominator) {
	if (denominator->getValue() == 0) throw std::invalid_argument("Denorminator shall not be 0.");
	return std::shared_ptr<const Expression>(new Rational(numerator, denominator));
}

//	Constructor with two int
std::shared_ptr<const Expression> Rational::create(const int numerator, const int denominator) {
	return create(Integer::create(numerator), Integer::create(denominator));
}





/*	METHODS	*/
float Rational::approximate() const {
	return numerator->approximate() / denominator->approximate();
}

bool Rational::equals(std::shared_ptr<const Expression> comparator) const {
	auto a = denominator->getValue();
	auto b = numerator->getValue();

	// Should we symplify before trying to see if it's Rational?
	std::shared_ptr<const Expression> simplifiedComparator = comparator->simplify();

	auto rationalComparator = std::dynamic_pointer_cast<const Rational>(simplifiedComparator);
	if (rationalComparator) {
		auto c = rationalComparator->numerator->getValue();
		auto d = rationalComparator->denominator->getValue();

		return a * d == c * b; // for when a, b, c and d are all int.
	} else {
		auto integerComparator =std::dynamic_pointer_cast<const Integer>(simplifiedComparator);
		if (integerComparator) {
			auto c = integerComparator->getValue(); // same here.

			return a == c * b; // a / b = c  =>  a * 1 = c * b
		} else return false;
	}	
}

std::shared_ptr<const Expression> Rational::simplify() const {
	// Let's leave this for last.
}

std::string Rational::toString() const {
	return numerator->toString() + "/" + denominator->toString();
}