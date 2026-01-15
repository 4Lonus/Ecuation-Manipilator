#include "Rational.h"
#include "Integer.h"





/*	CONSTRUCTOR / DESTRUCTOR	*/
//	Private Constructor
Rational::Rational(std::shared_ptr<const Integer> numerator, std::shared_ptr<const Integer> denominator) : numerator (numerator), denominator(denominator) {}

//	Constructor with two Integers
std::shared_ptr<const Expression> Rational::create(std::shared_ptr<const Integer> numerator, std::shared_ptr<const Integer> denominator) {
	if (*denominator == 0)
		throw std::invalid_argument("Denominator shall not be 0.");
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
	std::shared_ptr<const Expression> simplifiedComparator = comparator->simplify();

	auto rationalComparator = std::dynamic_pointer_cast<const Rational>(simplifiedComparator);
	if (rationalComparator)
		return (*numerator * *rationalComparator->denominator) == (*denominator * *rationalComparator->numerator);
	else {
		auto integerComparator = std::dynamic_pointer_cast<const Integer>(simplifiedComparator);
		if (integerComparator)
			return *numerator == *(*integerComparator * *denominator);
		else return false;
	}	
}

std::shared_ptr<const Expression> Rational::simplify() const {
	// 1st, simplify if numerator == denominator.
	if (*numerator == *denominator)
		return Integer::create(1);

	// 2nd, normalize sign, and simplify the new Rational.
	if (*denominator < 0)
		return Rational::create(*numerator * -1, *denominator * -1)
		->simplify();

	// 3nrd, simplify both num and den by the GCF, and simplify.
	int gcf = Tools::getSteinsGCF(*numerator, *denominator);
	if (gcf > 1)
		return Rational::create(*numerator / gcf, *denominator / gcf)
		->simplify();
	
	// 4th, if den == 1 we just return num.
	if (*denominator == 1)
		return numerator;

	// 5th, else Rational is on its smallest/simplest form, we just return it.
	return shared_from_this();
}

std::string Rational::toString() const {
	return numerator->toString() + "/" + denominator->toString();
}