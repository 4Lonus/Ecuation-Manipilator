#include <iostream>
#include "Out.h"

using namespace std;


void Out::println(const string& line) {
    std::cout << line << std::endl;
}

void Out::print(const string& text) {
    std::cout << text;
}

void Out::print(const double& number) {
    std::cout << number;
}

void Out::indent(const int ammount) {
    string tab = "";

    for (int i = 0; i < ammount; i++)
        tab += "\t";

    std::cout << tab;
}