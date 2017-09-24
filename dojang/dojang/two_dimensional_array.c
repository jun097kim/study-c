#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", numArr[0][0]);	// 11
	printf("%d\n", numArr[1][2]);	// 77
	printf("%d\n", numArr[2][0]);	// 99
	printf("%d\n", numArr[2][3]);	// 132

	return 0;
}