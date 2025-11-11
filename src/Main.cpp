#include <iostream>
#include <string>
#include "util/Out.h"

using namespace std;

int main() {
    Out::println("Hello World.");
    Out::print("Hello World, Same Line!!");

    Out::indent(5);
    Out::print("5 Indent.");

    return 0;
}