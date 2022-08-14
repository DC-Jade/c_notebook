#include <stdio.h>

#include "../include/word_count.h"
#include "../include/count_character.h"
#include "../include/strlen.h"
#include "../include/getline.h"
#include "../include/foo_1.h"
//#include "../include/foo_2.h"
#include "../include/str_cp.h"

#define ARRAYLEN 100  // NO semicolon!!!!!!!

void Test_Char0_Int0() {
	int a, b;
	a = '0'; b = 0;
	if (a == b) printf("%d == %d\n", a, b);
	else printf("%d != %d\n", a, b);
}

void TestStrlen() {
	char s[ARRAYLEN];
	int len = 10;
	for (int i = 0; i < len; ++i)
		s[i] = i + '0';
	printf("string len = %d\n", Strlen(s));
}

int TestGetline() {
	char pattern[] = "ould";
	char line[ARRAYLEN];
	int found = 0;
	while (Getline(line, ARRAYLEN) > 0) {
		if (Strindex(line, pattern) >= 0) {
			printf("%s", line);
			++found;
		}
	}
	return found;
}

void TestVar(int i) {
	printf("%d\n", i);
}

void TestStrcp() {
	char *s = "hello, world";
	char *t; 
	/*
	Strcp(t, s);
	while (*s++)
		printf("%d ", *s);
	*/
	printf("%d", *++s);
	printf("\n");
}

void TestStatic() {
	static int s_len;
	++s_len;
	printf("%d\n", s_len);
}

void TestVoidPointer() {
	void *c = "hello, world";
	char *c1 = (char *) c;
	int *c2 = (int *) c;
	printf("%s %p\n", c, c);
	printf("%s %p\n", c1, c1);
	printf("%s %p\n", c2, c2);
}

void TestPointer() {
	int array[ARRAYLEN] = {0, 1, 2, 3, 4, 5};
	int narray = sizeof array / sizeof(int);
	int adress_array = &array;
	int adress_array2 = array;
	int adress_array3 = &array[0];
	printf("%d %p %p %p\n", narray, adress_array, 
			adress_array2, adress_array3);
	printf("adress size: %d byte\n", sizeof(&array));
	printf("int size: %d byte\n", sizeof(int));
}

void TestCharInt() {
	int i = '1' - '0';
	printf("%d\n", i);
}

void TestArray() {
	char *ca[ARRAYLEN] = {"string", "hello", "world"};
	printf("%s %s %s\n", ca[0], ca[1], ca[2], ca[3]);
}

int main() {
	//int i = 1;
	//WordCount();
	//CountCharacter();
	//Test_Char0_Int0();
	//TestStrlen();
	//TestGetline();
	//TestVar(i);
	//TestStrcp();
	//TestStatic();
	//TestStatic();
	//TestVoidPointer();
	//TestPointer();
	//TestCharInt();
	TestArray();
}
