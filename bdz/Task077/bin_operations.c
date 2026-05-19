#include <stdio.h>

int switchbit(const int value, const int position) {
	return value ^ (1 << position);
}

int main()
{
	 int x = 0b11111111;
    x = switchbit(x, 5);
    printf("%d\n", x); // 11011111 = 223
    return 0;
	return 0;
}
