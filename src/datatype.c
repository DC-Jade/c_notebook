#include <stdio.h>

void printRangeBasictype() {
	printf("size of char: %d\n", sizeof(char));
	printf("size of short: %d\n", sizeof(short));
	printf("size of int: %d\n", sizeof(int));
	printf("size of unint: %d\n", sizeof(unsigned int));
	printf("size of long: %d\n", sizeof(long));
}

void printString() {
	/* string consts can be concatenated at compile time */
	char str[] = "hello, "
		"world";
	printf("%s\n", str);
}

int main() {
	printRangeBasictype();
	printString();
}
