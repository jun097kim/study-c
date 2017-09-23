#include <stdio.h>

int main() {
	char num1 = 67;	// 0100 0011
	char num2;

	num2 = num1 >> 5;	// 0000 0010

	printf("%d\n", num2);

	return 0;
}