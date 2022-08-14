#include <stdio.h>

void typecast() {
	const char *s = "hello";
	/* char *s = "hello"; */
	const char str[] = "hello";
	printf("s: %p\n", s);
	printf("s: %s\n", *s);
	printf("str: %p\n", str);
	printf("func: %p\n", typecast);
}

void testTypecast() {
	typecast();
}

int main() {
	testTypecast();
}
