#include <stdio.h>
#include <stdlib.h>

int main() {
	// ���� �����Ͱ� �� ���� �޸� �Ҵ�
	long long ***m = malloc(sizeof(long long *) * 2);

	// ���� �����Ͱ� �� ���� �޸� �Ҵ�
	for (int depth = 0; depth < 2; depth++) {
		m[depth] = malloc(sizeof(long long *) * 3);

		// �� ���� �޸� �Ҵ�
		for (int row = 0; row < 3; row++) {
			m[depth][row] = malloc(sizeof(long long) * 5);
		}
	}

	m[1][2][4] = 100;
	printf("%lld\n", m[1][2][4]);

	// �� ���� �޸� ����
	for (int depth = 0; depth < 2; depth++) {
		for (int row = 0; row < 3; row++) {
			free(m[depth][row]);
		}

		// ���� �����Ͱ� �� ���� �޸� ����
		free(m[depth]);
	}

	// ���� �����Ͱ� �� ���� �޸� ����
	free(m);

	return 0;
}