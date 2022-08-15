#include <stdio.h>

int binsearch(int x, int v[], int n) {
	int low, high, mid;
	low = 0; high = n - 1;
	while (low <= high) {
		mid = low + ((high - low) >> 1);
		if (x > v[mid]) low = mid + 1;
		else if (x < v[mid]) high = mid - 1;
		else return mid;
	}
	return -1;
}

void testBinsearch() {
	int v[] = {0, 1, 2, 3, 4, 5};
	for (int x = 0; x < (sizeof(v) / sizeof(v[0])); ++x) {
		int res = binsearch(x, v, sizeof(v) / sizeof(v[0]));
		/* int res = binsearch(x, v, 6); */
		printf("%d\n", res);
	}
}

int main() {
	testBinsearch();
}
