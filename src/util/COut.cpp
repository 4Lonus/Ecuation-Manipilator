#include "COut.h"

using namespace std;

void COut::println(const string& line) {
	std::cout << line << std::endl;
}

void COut::println(const int number) {
	std::cout << number << std::endl;
}

void COut::print(const string& text) {
	std::cout << text;
}

void COut::print(const int number) {
	std::cout << number;
}