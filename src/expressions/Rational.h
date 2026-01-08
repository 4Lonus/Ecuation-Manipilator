#ifndef RATIONAL_H
#define RATIONAL_H

#include "Expression.h"

class Rational : public Expression {
	private:
		const std::shared_ptr<Integer> numerator, denominator;
		Rational(std::shared_ptr<Integer> numerator, std::shared_ptr<Integer> denominator);
	public:
		static std::shared_ptr<Expression> create(
			const std::shared_ptr<Integer> numerator,
			const std::shared_ptr<Integer> denominator
		);
		static std::shared_ptr<Expression> create(const int numerator, const int denominator);
		~Rational() = default;
		float aproximate() const override;
		bool equals(std::shared_ptr<Expression>) const override;
		std::shared_ptr<const Expression> simplify() const override;
		std::string toString() const override;
};

#endif