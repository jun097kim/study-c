#include <stdio.h>

int main() {
	int num1 = 10;

	/*
	변수의 메모리 주소
	32비트: 16진수 8자리 = %08X, 64비트: 16진수 16자리 = %016X
	2^32 = 16(2^4)^8개, 2^64 = 16^16개
	*/
	printf("%p\n", &num1);
	printf("%08X\n", &num1);
	printf("%016X\n", &num1);

	return 0;
}