#include "Utils.h"
#include "Expressions.h"
#include <memory>

int main() {
    auto x = Rational::create((7*5)*2, (5*3)*2);

    auto simplifiedX = x->simplify();

    COut::println(x->toString());
    COut::println(simplifiedX->toString());

    return 0;
}