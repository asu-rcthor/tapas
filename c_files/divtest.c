#include <stdio.h>

int main() {
	unsigned int x = 0;
	scanf("%d", &x);
	printf("%d\n", x / 1);
	printf("%d\n", x / 2);
	printf("%d\n", x / 3);
	printf("%d\n", x / 4);
	printf("%d\n", x / 5);
	printf("%d\n", x / 6);
	printf("%d\n", x / 7);
	printf("%d\n", x / 8);
	printf("%d\n", x / 9);
	printf("%d\n", x / 10);
	signed int* y = &x;
	printf("%d\n", *y / 1);
	printf("%d\n", *y / 2);
	printf("%d\n", *y / 3);
}
