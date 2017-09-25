#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {
	int matrix[5][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 16, 17, 18, 19, 20 },
		{ 21, 22, 23, 24, 25 }
	};

	int row = sizeof(matrix) / sizeof(matrix[0]);
	int col = sizeof(matrix[0]) / sizeof(int);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i < j) {
				int tmp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = tmp;
			}
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}