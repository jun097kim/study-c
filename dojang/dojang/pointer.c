#include <stdio.h>

int main() {
	int *numPtr;	// pointer to int(int�� ������ ����Ű�� ������)
	int num1 = 10;

	numPtr = &num1;	// ������ ������ �޸� �ּ� ����

	printf("%p\n", numPtr);	// num1�� �ּ�
	printf("%p\n", &num1);	// num1�� �ּ�

	return 0;
}