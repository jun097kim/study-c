#include <stdio.h>

int main() {
	long long *numPtr1;
	float *numPtr2;
	char *cPtr1;
	/*
	# 포인터형을 만들지 않고, 자료형에 맞춰서 포인터를 선언하도록 만든 이유
	역참조: 선언한 자료형의 크기에 맞추서 값을 가져오거나 저장
	*/

	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);	// 8바이트 크기만큼 값을 가져오거나 저장
	printf("%f\n", *numPtr2);	// 4바이트 크기만큼 값을 가져오거나 저장
	printf("%c\n", *cPtr1);		// 1바이트 크기만큼 값을 가져오거나 저장

	return 0;
}