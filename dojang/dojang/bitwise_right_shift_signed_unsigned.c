#include <stdio.h>

int main() {
	unsigned char num1 = 131;	// 1000 0011
	char num2 = -125;	// 125 = 0111 1101. -125 = 1000 0011

	unsigned char num3;
	char num4;

	num3 = num1 >> 5;	// 0000 0100
	num4 = num2 >> 5;	// 1111 1100. 0000 0100 = 4. -4

	printf("%u\n", num3);
	printf("%d\n", num4);

	return 0;
}