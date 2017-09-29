#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int size;
	scanf("%d", &size);

	// 출력만
	/*for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}*/

	// 저장하고 출력

	// 2차원 배열처럼 사용하는 이중 포인터
	// 행의 포인터가 들어갈 공간 메모리 할당
	int **matrix = malloc(sizeof(int *) * size);

	for (int i = 0; i < size; i++) {
		// 열 공간 메모리 할당
		matrix[i] = malloc(sizeof(int) * size);
		// matrix[i]가 가리키는 메모리를 4바이트만큼 0으로 설정
		memset(matrix[i], 0, sizeof(int)*size);
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j)
				matrix[i][j] = 1;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	// 열 공간 메모리 해제
	for (int i = 0; i < size; i++) {
		free(matrix[i]);
	}

	// 행의 포인터가 들어간 공간 메모리 해제
	free(matrix);

	return 0;
}