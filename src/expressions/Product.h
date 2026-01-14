#ifndef PRODUCT_H
#define PRODUCT_H

#include "Expression.h"
#include <vector>

class Product : public Expression, public std::enable_shared_from_this<Product> {
	private:
		std::vector<std::shared_ptr<const Expression>> factors;
};

#endif