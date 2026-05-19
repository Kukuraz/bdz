#include <stdio.h>

int checkbit(const int value, const int position) {
	return (value >> position) & 1;
}

int main()
{
	int x = 0b01011110;
    printf("%d\n", checkbit(x, 5)); // 0
    printf("%d\n", checkbit(x, 4)); // 1
    return 0;
	return 0;
}
