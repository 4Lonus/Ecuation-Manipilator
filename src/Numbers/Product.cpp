#include "Product.h"
#include "Integer.h"
#include "../Util/Out.h"

// Constructor
Product::Product(Number* a, Number* b) : a(a), b(b) {}

// Destructor (For Composed Object we must delete the son objects manually).
Product::~Product() {
	delete a;
	delete b;
}

//Methods
double Product::getValue() const {
	return a->getValue() * b->getValue();
}

void Product::setValue(Number* a, Number* b) {
	this->a = a;
	this->b = b;
}

void Product::print() const {
	const bool needsParenthesis =
		!Integer::isInteger(a) || !Integer::isInteger(b);

	if (needsParenthesis) Out::print("(");
	a->print();
	Out::print(" × ");
	b->print();
	if (needsParenthesis) Out::print(")");
}