#include <stdio.h>
#define IN  1
#define OUT 0

void WordCount() {
	int input, nl, nw, nc;
	int state = OUT;
	nl = nw = nc = 0;
	while ((input = getchar()) != EOF) {
		++nc;
		if (input == '\n') ++nl;
		if (input == ' ' || input == '\t' || input == '\n') state = OUT;
		else if (state == OUT)  { state = IN; ++nw; }
	}
	printf("nl: %d  nw: %d nc: %d\n", nl, nw, nc);
}

