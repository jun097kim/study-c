#include <stdio.h>

int main() {
	int *numPtr1;	// ���� ������ ���� *
	int **numPtr2;
	/*
	���� ������ ���� **
	�������� ������(���� ������): �������� �޸� �ּҸ� ����
	pointer to pointer to int
	*/

	int num1 = 10;

	numPtr1 = &num1;
	numPtr2 = &numPtr1;

	printf("%d\n", **numPtr2);	// ������ �����ڸ� �� �� ���: �������� �� �� �Ѵ�.

	return 0;
}