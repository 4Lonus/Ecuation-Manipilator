#ifndef COUT_H
#define COUT_H

#include <string>
#include <iostream>
using namespace std;

class COut {
	public:
		static void println(const string& line);
		static void println(const int number);
		static void print(const string& text);
		static void print(const int number);
};

#endif