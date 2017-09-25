#define _CRT_SECURE_NO_WARNGINS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int row, col;
	scanf("%d %d", &row, &col);

	int **m = malloc(sizeof(int *) * row);

	for (int i = 0; i < row; i++) {
		m[i] = malloc(sizeof(int) * col);
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			m[i][j] = i + j;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++) {
		free(m[i]);
	}

	free(m);

	return 0;
}