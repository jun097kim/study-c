#include <stdio.h>

int main() {
	int *numPtr;	// ������ ���� *. ������: ������ �ּҸ� ����Ŵ
	int num1 = 10;

	numPtr = &num1;
	printf("%d\n", *numPtr);	// ������ ������ *. ������: �ּҿ� �����Ͽ� ���� �������ų� ����

	return 0;
}