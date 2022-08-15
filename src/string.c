#include <stdio.h>

char cs[] = "hello";
static char (*s)[sizeof(cs) / sizeof(cs[0])] = &cs;

void typecast() {
	const char *s = "hello";
	/* char *s = "hello"; */
	const char str[] = "hello";
	printf("s: %p\n", s);
	printf("s: %s\n", *s);
	printf("str: %p\n", str);
	printf("func: %p\n", typecast);
}

void testStatic() {
	printf("%s\n", *s);
}

void testTypecast() {
	typecast();
}

int strlen(char *s) {
	int n = 0;
	for (; *s != '\0'; ++s) {
		++n;
	}
	printf("address of parameter: %p\n", &s);
	printf("address of parameter pointing to: %p\n", s);
	return n;
}

void testStrlen() {
	int res = strlen("hello, world");
	printf("len = %d\n", res);
}

/* char *month[] = { "illegal month", "Jan", "Feb", "Mar" }; */

void testMonth() {
	/* char *month[] = { "illegal month", "Jan", "Feb", "Mar" }; */
	/* for (int i = 0; i < sizeof(month) / sizeof(month[0]); ++i) { */
	/*   printf("%s\n", month[i]); */
	/* } */
	char *month = "illegal month";
	printf("address of month: %p\n", &month);
	printf("address of month pointing to: %p\n", month);
	printf("month[0]: %c\n", month[0]);
	printf("%s\n", month);
	printf("month: %c\n", *month);
}
int main() {
	/* testTypecast(); */
	/* testStatic(); */
	/* testStrlen(); */
	testMonth();
}
