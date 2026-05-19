#include <stdio.h>
unsigned char setbit(unsigned char byte, int pos)
{
    return byte | (1 << pos);
}

void bin(long unsigned int k, long unsigned int size)
{
	long unsigned bits = size * 8;
	int arr[64];

	for (long unsigned i = 0 ; i < bits; i++){
		arr[i] = k % 2;	
		k = k / 2;
		
	}

	for (long int i = bits - 1; i >= 0 ; i--){
		printf("%d", arr[i]);
	}
	printf("\n");
}

struct byte_s {
	unsigned a0 : 1;
	unsigned a1 : 1;
	unsigned a2 : 1;
	unsigned a3 : 1;
	unsigned a4 : 1;
	unsigned a5 : 1;
	unsigned a6 : 1;
	unsigned a7 : 1;
};

union code
{
	unsigned char letter;
	struct byte_s bitfield;
}byte;


int main()
{
	union code a, b;
    a.letter = 0b00000000;
    b.letter = 0b11111111;
    a.letter = setbit(a.letter, 5);
    bin(a.letter, sizeof(a.letter)); // печатает на экран число в двоичном виде
	return 0;
}
