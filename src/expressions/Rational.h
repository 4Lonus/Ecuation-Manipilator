#ifndef RATIONAL_H
#define RATIONAL_H

#include "Expression.h"

class Rational : public Expression {
	private:
		Expression* numerator;
		Expression* denominator;
	public:
		Rational(int numerator, int denominator);
		~Rational();
		float getValue() const override;
		bool isExact() const override;
		Expression* simplify() const override;
};

#endif