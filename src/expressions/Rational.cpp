#include "Rational.h"
#include "Integer.h"


/*	CONSTRUCTOR / DESTRUCTOR	*/
Rational::Rational(std::shared_ptr<Integer> numerator, std::shared_ptr<Integer> denominator) : numerator (numerator), denominator(denominator) {}

std::shared_ptr<Expression> Rational::create(std::shared_ptr<Integer> numerator, std::shared_ptr<Integer> denominator) {
	if (denominator.get()->getValue() == 0) throw std::invalid_argument("Determinator shall not be 0.");
	return std::shared_ptr<Expression>(new Rational(numerator, denominator));
}

std::shared_ptr<Expression> Rational::create(int num, int den) {
	return create(Integer::create(num), Integer::create(den));
}


/*	METHODS	*/
float Rational::aproximate() const {
	return numerator->aproximate() / denominator->aproximate();
}

bool Rational::equals(std::shared_ptr<Expression>) const {
	return true; // i'll introduce the cross mult later...
}

std::shared_ptr<const Expression> Rational::simplify() const {
	if (denominator.get()->getValue() == 1);
}

std::string Rational::toString() const {
	return numerator.get()->toString() + "/" + denominator.get()->toString();
}