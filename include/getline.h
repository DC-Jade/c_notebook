#include <stdio.h>

int Getline(char line[], int max);
int Strindex(char source[], char searchfor[]);

int Getline(char line[], int max) {
	int input, i;
	i = 0;
	while (--max > 0 && (input = getchar()) != EOF && input != '\n')
		line[i++] = input;
	if (input == '\n') line[i++] = input;
	line[i] = '\0';
	return i;
}

int Strindex(char s[], char t[]) {
	int i, j, k;
	for (i = 0; s[i] != '\0'; ++i) {
		for (j = i, k = 0; s[j] == t[k] && t[k] != '\0'; ++k, ++j)
			;
		if (k > 0 && t[k] != '\0')
			return i;
	}
	return -1;
}



