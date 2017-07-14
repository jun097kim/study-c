#include <stdio.h>

int main() {
	int *numPtr;
	int num1 = 10;
	/*
	16진수 0a
	1바이트 = 8비트. 2^8 = 16(2^4)^2. 16진수 2자리
	리틀 엔디언 방식 : 1바이트씩 쪼개서 낮은 자릿수가 앞에 온다. 값을 거꾸로 저장
	*/

	numPtr = &num1;	// 주소 연산자 &: int -> address to int = pointer to int. 자로형을 맞춰주는 역할

	//numPtr = num1;	// numPtr: int 포인터형, num1: int형. 자료형 불일치
	//*numPtr = num1;	// 역참조 연산자 *: pointer to int -> int. 자로형을 맞춰주는 역할

	*numPtr = 20;	// 중단점을 설정한 줄의 코드가 실행되기 전에 실행을 멈춤

	printf("%d\n", *numPtr);
	printf("%d\n", num1);

	return 0;
}