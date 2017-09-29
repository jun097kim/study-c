#include <stdio.h>
#include <stdlib.h>

int main() {
	// 행의 포인터가 들어갈 공간 메모리 할당
	int **m = malloc(sizeof(int *) * 3);

	// 열 공간 메모리 할당
	for (int i = 0; i < 3; i++) {
		m[i] = malloc(sizeof(int) * 4);
	}

	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);

	// 열 공간 메모리 해제
	for (int i = 0; i < 3; i++) {
		free(m[i]);
	}
	
	// 행의 포인터가 들어간 공간 메모리 해제
	free(m);

	return 0;
}