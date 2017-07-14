#include <stdio.h>

int main() {
	int *numPtr;	// pointer to int(int형 공간을 가리키는 포인터)
	int num1 = 10;

	numPtr = &num1;	// 포인터 변수에 메모리 주소 저장

	printf("%p\n", numPtr);	// num1의 주소
	printf("%p\n", &num1);	// num1의 주소

	return 0;
}