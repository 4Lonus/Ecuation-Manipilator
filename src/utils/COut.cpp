#include "COut.h"





/*	Print With Linebreak At the End	*/
void COut::println(const string& line) {
	std::cout << line << std::endl;
}

void COut::println(const int number) {
	std::cout << number << std::endl;
}

void COut::println(const float number) {
	std::cout << number << std::endl;
}





/*	Print Within Line	*/
void COut::print(const string& text) {
	std::cout << text;
}

void COut::print(const int number) {
	std::cout << number;
}