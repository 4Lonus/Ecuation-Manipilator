#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <memory>
#include <string>
#include <stdexcept>





class Expression {
	public:
		virtual ~Expression() = default;
		virtual float approximate() const = 0;
		virtual bool equals(std::shared_ptr<const Expression> comparator) const = 0;
		virtual std::shared_ptr<const Expression> simplify() const = 0;
		virtual std::string toString() const = 0;
};

#endif