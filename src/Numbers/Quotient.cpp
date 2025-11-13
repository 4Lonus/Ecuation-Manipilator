#include "Quotient.h"

#include "../Util/Out.h"

/*	CONSTRUCTOR / DESTRUCTOR	*/
Quotient::Quotient(Number* numerator, Number* denominator) : numerator(numerator), denominator(denominator) {}

Quotient::~Quotient() {
	delete numerator;
	delete denominator;
}



/*	METHODS	*/
double Quotient::getValue() const {
	return numerator->getValue() / denominator->getValue();
}

void Quotient::setValue(Number* numerator, Number* denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
}

Number* Quotient::solve() {
	Out::print("No Supported Yet");
	return this;
}

