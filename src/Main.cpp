#include "Utils.h"
#include "Expressions.h"
#include <memory>

int main() {
    std::shared_ptr<Integer> x = Integer::create(1);

    COut::println(x.get()->getValue());
}