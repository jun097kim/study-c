#include <stdio.h>

int main() {
	int *numPtr1;	// 단일 포인터 선언 *
	int **numPtr2;
	/*
	이중 포인터 선언 **
	포인터의 포인터(이중 포인터): 포인터의 메모리 주소를 저장
	pointer to pointer to int
	*/

	int num1 = 10;

	numPtr1 = &num1;
	numPtr2 = &numPtr1;

	printf("%d\n", **numPtr2);	// 역참조 연산자를 두 번 사용: 역참조를 두 번 한다.

	return 0;
}