#include <stdio.h>

int main() {
	unsigned int x = -1;
	int y = -1;
	int z = 0;

	printf("x: %d y: %d\n", x, y);
	if (x == y) {
		printf("x is equal to y i guess\n");
	}
	if (x > z) {
		printf("x is in fact greater than z\n");
	} else {
		printf("Really? Signed comparisons?\n");
	}
	if (y > z) {
		printf("This ain't happenin'\n");
	} else {
		printf("y is in fact less than z\n");
	}
	return 0;
}
