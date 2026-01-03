#ifndef INTEGER_H
#define INTEGER_H

#include "Expression.h"

class Integer : public Expression {
	private:
		int value;
	public:
		Integer(int value);
		~Integer();
		float getValue() const override;
		bool isExact() const override;
		Expression* simplify() const  override;
};

#endif