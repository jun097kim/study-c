#include <stdio.h>

int main() {
	unsigned char num1 = 4;	// 0000 0100
	unsigned char num2 = 4;
	unsigned char num3 = 4;
	unsigned char num4 = 4;
	unsigned char num5 = 4;
	
	num1 &= 5;	// & 0000 0101 = 0000 0100. 4
	num2 |= 2;	// | 0000 0010 = 0000 0110. 6
	num3 ^= 3;	// ^ 0000 0011 = 0000 0111. 7
	num4 <<= 2;	// 0001 0000. 16
	num5 >>= 2;	// 0000 0001. 1

	printf("%u\n", num1);
	printf("%u\n", num2);
	printf("%u\n", num3);
	printf("%u\n", num4);
	printf("%u\n", num5);

	return 0;
}