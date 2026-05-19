#include <stdio.h>

int unsetbit(const int value, const int position) {
	return value & ~(1 << position); 
}

int main()
{
	int x = 0b11111111;
	x = unsetbit(x, 5);
	printf("%d\n", x);

	return 0;
}
