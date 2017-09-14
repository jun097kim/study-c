/*
memset(memory set) 함수: 메모리의 내용을 원하는 크기만큼 특정 값으로 설정
헤더 파일 string.h, memory.h
원래 char 배열을 위해 만들어진 함수. 바이트 단위
*/
#include <stdio.h>
#include <stdlib.h>	// malloc, free 함수가 선언된 헤더 파일
#include <string.h>	// memset 함수가 선언된 헤더 파일

int main() {
	long long *numPtr = malloc(sizeof(long long));	// 8바이트 크기만큼 동적 메모리 할당

	//memset(numPtr, 0x27, 8);	// numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
	memset(numPtr, 0, 8);	// memset은 메모리를 모두 0으로 만들 때 주로 사용

	printf("0x%11x\n", *numPtr);

	free(numPtr);

	// char 배열은 원하는 문자로 채울 수 있음
	char c[5];

	memset(c, 'a', 4);	// 인덱스 0~3 0x97로 채움
	c[4] = '\0';	// 인덱스 4 문자열의 끝을 의미하는 널 문자로 채움

	printf("%s\n", c);

	return 0;
}