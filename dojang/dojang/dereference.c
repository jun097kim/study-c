#include <stdio.h>

int main() {
	int *numPtr;	// 포인터 선언 *. 포인터: 변수의 주소만 가리킴
	int num1 = 10;

	numPtr = &num1;
	printf("%d\n", *numPtr);	// 역참조 연산자 *. 역참조: 주소에 접근하여 값을 가져오거나 저장

	return 0;
}