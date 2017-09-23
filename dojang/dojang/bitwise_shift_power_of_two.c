#include <stdio.h>

int main() {
	unsigned char num1 = 1;	// 0000 0001

	printf("%u\n", num1 << 1);	// 0000 0010
	printf("%u\n", num1 << 2);	// 0000 0100
	printf("%u\n", num1 << 3);	// 0000 1000
	printf("%u\n", num1 << 4);	// 0001 0000
	printf("%u\n", num1 << 5);	// 0010 0000
	printf("%u\n", num1 << 6);	// 0100 0000
	printf("%u\n", num1 << 7);	// 1000 0000

	return 0;
}