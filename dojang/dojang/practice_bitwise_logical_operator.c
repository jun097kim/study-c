#include <stdio.h>

int main() {
	unsigned char num1 = 1;	// 0000 0001
	unsigned char num2 = 5;	// 0000 0101

	printf("%u\n", num1 | num2);	// 5. 0000 0101
	printf("%u\n", num1 ^ num2);	// 4. 0000 0100
	printf("%u\n", num1 & num2);	// 1. 0000 0001

	num1 = ~num2;	// 250. 1111 1010;
	printf("%u\n", num1);

	return 0;
}