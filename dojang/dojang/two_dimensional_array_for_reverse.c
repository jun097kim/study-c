#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	int row = sizeof(numArr) / sizeof(numArr[0]);
	int col = sizeof(numArr[0]) / sizeof(int);

	for (int i = row - 1; i >= 0; i--) {
		for (int j = col - 1; j >= 0; j--) {
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}

	return 0;
}