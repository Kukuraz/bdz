#include <stdio.h>

int setbit(const int value, const int position) {
	return value | (1 << position);
}


int main()
{
	int x = 0b000000;
	x = setbit(x, 3);
	printf("%d\n", x);

	return 0;
}
