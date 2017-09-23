#include <stdio.h>

int main() {
	char num1 = 113;	// 0111 0001
	char num2 = -15;	// 15 = 0000 1111. -15 = 1111 0001
	char num3, num4, num5, num6;

	num3 = num1 << 2;	// 1100 0100. 0011 1100 = 60. -60
	num4 = num2 << 2;	// 1100 0100

	num5 = num1 << 4;	// 0001 0000
	num6 = num2 << 4;	// 0001 0000

	printf("%d\n", num3);
	printf("%d\n", num4);
	
	printf("%d\n", num5);
	printf("%d\n", num6);

	return 0;
}