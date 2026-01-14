#ifndef RATIONAL_H
#define RATIONAL_H

#include "Expression.h"
#include "Integer.h"
#include "../utils/Tools.h"





class Rational : public Expression, public std::enable_shared_from_this<Rational> {
	private:
		const std::shared_ptr<const Integer> numerator, denominator;
		Rational(std::shared_ptr<const Integer> numerator, std::shared_ptr<const Integer> denominator);
	public:
		static std::shared_ptr<const Expression> create(const std::shared_ptr<const Integer> numerator, const std::shared_ptr<const Integer> denominator);
		static std::shared_ptr<const Expression> create(const int numerator, const int denominator);
		~Rational() = default;
		float approximate() const override;
		bool equals(std::shared_ptr<const Expression> comparator) const override;
		std::shared_ptr<const Expression> simplify() const override;
		std::string toString() const override;
};

#endif