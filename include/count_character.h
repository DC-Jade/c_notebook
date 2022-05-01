#include <stdio.h>

void CountCharacter() {
	int input, nwhite, nother;
	int ndigit[10];
	
	// initialize
	nwhite = nother = 0;
	for (int i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((input = getchar()) != EOF) {
		if (input >= '0' && input <= '9') ++ndigit[input - '0'];
		else if (input == ' ' || input == '\t' || input == '\n') ++nwhite;
		else ++nother;	
	}
	
	// print
	printf("digits = ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", ndigit[i]);
	printf("\nwhite space = %d other = %d\n", nwhite, nother);
}
