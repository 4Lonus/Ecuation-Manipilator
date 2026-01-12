#include "Utils.h"
#include "Expressions.h"
#include <memory>

int main() {
    auto x = Rational::create(1, 2);

    COut::println(x->toString());
    COut::println(x->approximate());
}