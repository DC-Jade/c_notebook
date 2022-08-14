#include <stdio.h>

int bitcount(unsigned x) {
	int n = 0;
	for (n = 0; x != 0; x >>= 1) {
		if (x & 01) ++n;
	}
	return n;
}

void testBitcount() {
	unsigned int x = 15;
	int res = bitcount(x);
	printf("bitcount = %d\n", res);
}

int mask(int x) {
/* save the last 7 bits */
#ifndef MASK
#define MASK 0177
#endif

	return x & MASK;
}

void testMask() {
	int x = 63;
	int res = mask(x);
	printf("%d\n", res);
}

int main() {
	/* testBitcount(); */
	testMask();
}
