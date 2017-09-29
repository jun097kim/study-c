#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int size;
	scanf("%d", &size);

	// ��¸�
	/*for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}*/

	// �����ϰ� ���

	// 2���� �迭ó�� ����ϴ� ���� ������
	// ���� �����Ͱ� �� ���� �޸� �Ҵ�
	int **matrix = malloc(sizeof(int *) * size);

	for (int i = 0; i < size; i++) {
		// �� ���� �޸� �Ҵ�
		matrix[i] = malloc(sizeof(int) * size);
		// matrix[i]�� ����Ű�� �޸𸮸� 4����Ʈ��ŭ 0���� ����
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

	// �� ���� �޸� ����
	for (int i = 0; i < size; i++) {
		free(matrix[i]);
	}

	// ���� �����Ͱ� �� ���� �޸� ����
	free(matrix);

	return 0;
}