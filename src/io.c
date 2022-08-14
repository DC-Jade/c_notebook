#include <stdio.h>

void testPutchar() {
	int c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	printf("end of loop1\n");

	while ((c = getchar()) != EOF) { 
		putchar(c);
	}
	printf("end of loop2\n");
}

void testIncrement() {
	double nc;
	for (nc = 0; getchar() != EOF; nc++) {
		/* enter key is also a input of getchar */
		printf("%.0f\n", nc);
	}
}

/* exercise 1-8 */
int countBlanks() {
	int nb = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') ++nb;
	}
	return nb;
}

int countNewlines() {
	int nl = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n') ++nl;
	}
	return nl;
}

void testCountBlanks() {
	int res = countBlanks();
	printf("count of blanks = %d\n", res);
}

void testCountNewlines() {
	int res = 0;
	printf("count of newlines = %d\n", res);
}

/* exercise 1-9 */
void input2Output() {
	int last, tmp;
	last = 0;
	while ((tmp = getchar()) != EOF) {
		if (tmp == ' ' && tmp == last) continue;
		putchar(tmp);
		last = tmp;
	}
}

void testInput2Output() {
	input2Output();
}

/* exercise 1-10 */
void printSlash() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\'); putchar('t'); 
		} else if (c == 8) {
			putchar('\\'); putchar('b');
		} else if (c == '\\') { 
			putchar('\\');	putchar('\\');	
		} else {
			putchar(c);
		}
	}
}

void testPrintSlash() {
	printSlash();
}

/* mywc, a simple implementation of wc */
#ifndef IN
#define IN 1
#endif

#ifndef OUT
#define OUT 0
#endif

void mywc() {
	int nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	int c;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') ++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("nl: %d nw: %d nc: %d\n", nl, nw, nc);
}

void testMywc() {
	mywc();
}

/* test for function */
#ifndef MAXLINE
#define MAXLINE 1000		/* maximum input line length */
#endif

int getLine(char line[], int maxline) {
	int i, c;
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] == c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}

/* print the longest input line */
void getLongestLine() {
	int len = 0;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) printf("%s\n", longest);
}

void testGetMaximumLine() {
	getLongestLine();
}

int main() {
	/* testPutchar(); */
	/* testIncrement(); */
	/* testCountBlanks(); */
	/* testCountNewlines(); */
	/* testInput2Output(); */
	/* testPrintSlash(); */
	/* testMywc(); */
	testGetMaximumLine();
}
