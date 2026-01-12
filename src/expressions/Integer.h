#ifndef INTEGER_H
#define INTEGER_H

#include "Expression.h"





class Integer : public Expression {
	private:
		const int value;
		Integer(int value);
	public:
		static std::shared_ptr<const Integer> create(int value);
		~Integer() = default;
		float approximate() const override;
		bool equals(std::shared_ptr<const Expression> comparator) const override;
		std::shared_ptr<const Expression> simplify() const override;
		std::string toString() const override;
		int getValue() const;
};

#endif