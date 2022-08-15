#include <stdio.h>

void echo_v1(int argc, char *argv[]) {
	/* echo version 1 based on for loop */
	for (int i = 1; i < argc; ++i) {
		printf("%s ", argv[i]);
	}
	printf("\n");
}

void echo_v2(int argc, char *argv[]) {
	/* echo version 2 based on while loop */
	while (--argc > 0) {
		printf("%s ", *++argv);
	} 
	printf("\n");
}

int main(int argc, char *argv[]) {
	echo_v1(argc, argv);
	echo_v2(argc, argv);
}
