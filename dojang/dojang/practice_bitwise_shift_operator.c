#include <stdio.h>

int main() {
	unsigned char num1 = 32;	// 0010 0000

	num1 = num1 >> 4 << 1;	// 4. 0000 0100

	printf("%u\n", num1);

	return 0;
}