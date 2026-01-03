#include "Tools.h"
#include <iostream>

/**
 * Gets the GCF with the Stein Binary Algorithm.
 */
int Tools::getGCF(int a, int b) {
	// Let's delete the sign:
	a = abs(a);
	b = abs(b);

	// Handling 0
	if (a == 0) return b;
    if (b == 0) return a;

	// If A = B, GCF is allways A or B (same).
	if (a == b) return a;

	// If A is even...
	if ((a & 1) == 0) {
		// Both even, we return the CGF WITH a factor of 2.
		if ((b & 1) == 0) return getGCF(a >> 1, b >> 1) << 1;
		// A is even & B odd.
		else return getGCF(a >> 1, b);
	}

	// A is odd & B is Even.
	if ((b & 1) == 0) return getGCF(a, b >> 1);

	// We substract the bigest with the smallest.
	// At this point we KNOW, both are odd & NOT equal.
	if (a > b) return getGCF(a - b, b);
	else return getGCF(a, b - a);
}