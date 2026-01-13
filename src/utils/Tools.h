#ifndef TOOLS_H
#define TOOLS_H

#include <memory>
#include "../Expressions.h"

class Tools {
	public:
		static int getSteinsGCF(const int a, const int b);
		static int getSteinsGCF(std::shared_ptr<const Integer> a, std::shared_ptr<const Integer> b);
};

#endif