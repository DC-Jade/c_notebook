#include <stdio.h>
#define IN  1
#define OUT 0

void test() {
	float fahr, celsius;
	float lower = 0, upper = 300, step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f%7.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

void test2() {
	//int c = getchar();
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
		//c = getchar();
	}
	if (c != EOF) 
		puts("\n");
}

void test3() { printf("hello, "); printf("world"); printf("\n"); }

void test4() { printf("%3d %6d\n%10s\n", 123, 456789, "0123456789"); }

void CountLine() {
	int sum = 1;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++sum;	
	}
	printf("\n%10d\n", sum);
}

void CountWhitespace() {
	int space_sum = 0;
	int tab_sum = 0;
	int newline_sum = 1;
	int input;
	while ((input = getchar()) != EOF) {
		if (input == ' ')
			++space_sum;
		if (input == '\t')
			++tab_sum;
		if (input == '\n')
			++newline_sum;
	}
	printf("\nspace count: %4d\ntab count: %4d\nnewline number: %4d\n",
			space_sum, tab_sum, newline_sum);
}

void DeduplicateSpace() {
	int input;
	int space_num = 0;
	while ((input = getchar()) != EOF) {
		if (input == ' ') ++space_num;
		else space_num = 0;	
		
		if (space_num <= 1) putchar(input);
	}
	putchar('\n');
}

// test 1-12
void PrintWord() {
	int input, nwhite = 0;
	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\t') {
			input = '\n';
			++nwhite;
		} else {
			nwhite = 0;
		}
		if (nwhite < 2) putchar(input);
	}
	putchar('\n');
}

void WordCount() {
	int input, nl, nw, nc; 
	nl = nw = nc = 0;
	int state = OUT;
	while ((input = getchar()) != EOF) {
		++nc;
		if (input == '\t') ++nl;
		if (input == ' ' || input == '\t' || input == '\n') state = OUT;
		if (state == OUT)  { state = IN; ++nw; }
	}
	printf("nl: %d  nw: %d nc: %d\n", nl, nw, nc);
}

void PrintSign() {
	printf("%s\n", "hello,world");
	printf("%s\n", "cwo\rld");
}

int main() {
	//test();
	//test2();
	//test3();
	//test4();
	//CountLine();
	//CountWhitespace();
	//DeduplicateSpace();
	//PrintWord();
	PrintSign();
}
