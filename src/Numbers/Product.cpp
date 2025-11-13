#include "Product.h"
#include "Integer.h"
#include "../Util/Out.h"

/*	CONSTRUCTOR / DESTRUCTOR	*/
Product::Product(Number* a, Number* b) : a(a), b(b) {}

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

Number* Product::solve() {
	Out::println("Not Yet Supported.");
	return this;
}

bool Product::isAtomic() const {
	return
		(Integer::isInteger(a) || !a->isAtomic()) &&
		(Integer::isInteger(b) || !b->isAtomic());
}



// Output
void Product::print() const {
	const bool needsParenthesis =
		!Integer::isClassInteger(a) || !Integer::isClassInteger(b);

	if (needsParenthesis) Out::print("(");
	a->print();
	Out::print(" × ");
	b->print();
	if (needsParenthesis) Out::print(")");
}