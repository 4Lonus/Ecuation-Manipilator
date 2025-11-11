#include <iostream>
#include <string>
#include "Out.h"

using namespace std;


void Out::println(const string& line) {
    std::cout << line << std::endl;
}

void Out::print(const string& text) {
    std::cout << text << std::endl;
}