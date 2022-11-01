#include <stdio.h>

int main() {
	int x = 1234;
	int * pX = &x;
	int y = *pX;
	x = 4;
	printf("x = %d\n *pX = %d\n y = %d\n x = %d", x, pX, y, x);
	return 0;
}
