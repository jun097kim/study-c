#include <stdio.h>

int main() {
	int *numPtr;
	int num1 = 10;
	/*
	16���� 0a
	1����Ʈ = 8��Ʈ. 2^8 = 16(2^4)^2. 16���� 2�ڸ�
	��Ʋ ����� ��� : 1����Ʈ�� �ɰ��� ���� �ڸ����� �տ� �´�. ���� �Ųٷ� ����
	*/

	numPtr = &num1;	// �ּ� ������ &: int -> address to int = pointer to int. �ڷ����� �����ִ� ����

	//numPtr = num1;	// numPtr: int ��������, num1: int��. �ڷ��� ����ġ
	//*numPtr = num1;	// ������ ������ *: pointer to int -> int. �ڷ����� �����ִ� ����

	*numPtr = 20;	// �ߴ����� ������ ���� �ڵ尡 ����Ǳ� ���� ������ ����

	printf("%d\n", *numPtr);
	printf("%d\n", num1);

	return 0;
}