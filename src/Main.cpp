#include "Utils.h"
#include "Expressions.h"
#include <memory>

int main() {
    auto x = Rational::create(35, 30);

    auto simplifiedX = x->simplify();

    COut::println(simplifiedX->toString());

    return 1;
}