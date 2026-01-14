#include "Utils.h"
#include "Expressions.h"
#include <memory>

int main() {
    auto x = Rational::create(7*5*2, 5*3*2);
    COut::print(x->toString() + " = ");
    COut::println(x->approximate());

    auto simplifiedX = x->simplify();
    COut::println(simplifiedX->toString());


    auto y = Rational::create(7*5*2, 7*5);
    COut::print(y->toString() + " = ");
    COut::println(y->approximate());

    auto simplifiedY = y->simplify();
    COut::println(simplifiedY->toString());

    return 0;
}