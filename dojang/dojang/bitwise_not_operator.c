#include <stdio.h>

int main() {
	unsigned char num1 = 162;	// 1010 0010
	unsigned char num2;

	num2 = ~num1;	// 0101 1101. 1 + 4 + 8 + 16 + 64 = 93
	
	printf("%u\n", num2);

	return 0;
}