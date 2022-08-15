#include <stdio.h>
#include <stdlib.h>

void strcpy_v1(char *from, char *to) {
	/* copy from to to, array subscription version */
	int i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

void strcpy_v2(char *from, char *to) {
	/* copy from to to, pointer version */
	while ((*to = *from) != '\0') {
		from++;
		to++;
	}
}

void strcpy_v3(char *from, char *to) {
	/* abbreviation of strcpy_v2 */
	while (*to++ = *from++)
		;
}

void testStrcpy() {
	char from1[] = "hello, world";
	char from2[] = "hello, world2";
	char from3[] = "hello, world3";
	char *to = (char *) malloc(sizeof(from1) / sizeof(from1[0]));
	strcpy_v1(from1, to);
	printf("v1: %s\n", to);
	strcpy_v2(from2, to);
	printf("v2: %s\n", to);
	strcpy_v3(from3, to);
	printf("v3: %s\n", to);
	char *old = to;
	for (int i = 0; i < sizeof(from1) / sizeof(from1[0]); ++i) {
		printf("%c\t%c\n", to[i], *to++);
	}
	free(old);
}

int strcmp_v1(char *s, char *t) {
	/* my first version */
	while (*s != '\0' || *t != '\0') {
		if (*s < *t) return -1;
		else if (*s > *t) return 1;
		/* else return 0; */
		s++;
		t++;
	}
	if (*s == '\0' && *t == '\0') return 0;
	else if (*s == '\0') return -1;
	else return 1;
}

int strcmp_v2(char *s, char *t) {
	for ( ; *s == *t; s++, t++) {
		if (*s == '\0')
			return 0; 
	}
	return *s - *t;
}

void testStrcmp() {
	int res;
	res = strcmp_v1("aab", "aaa");
	printf("res = %d\n", res);
	res = strcmp_v1("aaa", "aab");
	printf("res = %d\n", res);
	res = strcmp_v1("aaa", "aaa");
	printf("res = %d\n", res);
	res = strcmp_v2("aab", "aaa");
	printf("res = %d\n", res);
	res = strcmp_v2("aaa", "aab");
	printf("res = %d\n", res);
	res = strcmp_v2("aaa", "aaa");
	printf("res = %d\n", res);
}

int main() {
	/* testStrcpy(); */
	testStrcmp();
}
