#include <stdio.h>

int main() {
	int num1 = 10;

	/*
	������ �޸� �ּ�
	32��Ʈ: 16���� 8�ڸ� = %08X, 64��Ʈ: 16���� 16�ڸ� = %016X
	2^32 = 16(2^4)^8��, 2^64 = 16^16��
	*/
	printf("%p\n", &num1);
	printf("%08X\n", &num1);
	printf("%016X\n", &num1);

	return 0;
}