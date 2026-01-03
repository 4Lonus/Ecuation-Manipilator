#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression {
	public:
		virtual ~Expression() = default;
		virtual float getValue() const = 0;
		virtual bool isExact() const = 0;
		virtual Expression* simplify() const = 0;
};

#endif