#include <stdio.h>

int main() {
	int num1 = 10;
	char c1 = 'a';
	int *numPtr1 = &num1;
	char *cPtr1 = &c1;

	void *ptr;
	/*
	void 포인터: 자료형이 정해지지 않은 포인터. 값을 가져오거나 저장할 크기도 정해지지 않음. 역참조할 수 없음
	함수에서 다양한 자료형을 받아들일 때, 함수의 반환 포인터를 다양한 자료형으로 된 포인터에 저장할 때, 자료형을 숨기고 싶을 때 사용
	*/

	// void 포인터에 어떤 자료형으로 된 포인터든 모두 저장할 수 있음
	ptr = numPtr1;
	ptr = cPtr1;

	// 어떤 자료형으로 된 포인터에도 void 포인터 저장
	numPtr1 = ptr;
	cPtr1 = ptr;

	return 0;
}