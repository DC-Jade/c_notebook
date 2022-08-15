#include <stdio.h>

struct point {
	int x;
	int y;
};

void testPoint() {
	struct point p = {1, 2};
	printf("point.x: %d\n", p.x);
	printf("point.y: %d\n", p.y);
}

int main() {
	testPoint();
}
