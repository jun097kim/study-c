#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numPtr;
	numPtr = malloc(sizeof(int));

	*numPtr = 10;				// �����͸� �������Ͽ� ���� ������
	printf("%d\n", *numPtr);	// �����͸� �������Ͽ� ���� ������

	free(numPtr);

	return 0;
}