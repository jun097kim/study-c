#include <stdio.h>

int main() {
	int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	int *numPtr = numArr;

	printf("%d\n", *numPtr);	// �迭 �ּҰ� ����ִ� �����͸� �������ϸ� ù ��° ��� ��
	printf("%d\n", *numArr);	// �迭 ��ü�� �������ص� ù ��° ��� ��

	// �迭 �ּҰ� ����ִ� �����ʹ� �ε����� ���� ��ҿ� ���� ����
	printf("%d\n", numPtr[5]);

	printf("%d\n", sizeof(numArr));	// sizeof(�迭): �迭�� �����ϴ� ��ü ����
	printf("%d\n", sizeof(numPtr));	// sizeof(�迭 �ּҰ� ����ִ� ������): ������ ũ��

	return 0;
}