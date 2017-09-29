#include <stdio.h>
#include <stdlib.h>

int main() {
	// 면의 포인터가 들어갈 공간 메모리 할당
	long long ***m = malloc(sizeof(long long *) * 2);

	// 행의 포인터가 들어갈 공간 메모리 할당
	for (int depth = 0; depth < 2; depth++) {
		m[depth] = malloc(sizeof(long long *) * 3);

		// 열 공간 메모리 할당
		for (int row = 0; row < 3; row++) {
			m[depth][row] = malloc(sizeof(long long) * 5);
		}
	}

	m[1][2][4] = 100;
	printf("%lld\n", m[1][2][4]);

	// 열 공간 메모리 해제
	for (int depth = 0; depth < 2; depth++) {
		for (int row = 0; row < 3; row++) {
			free(m[depth][row]);
		}

		// 행의 포인터가 들어간 공간 메모리 해제
		free(m[depth]);
	}

	// 면의 포인터가 들어간 공간 메모리 해제
	free(m);

	return 0;
}