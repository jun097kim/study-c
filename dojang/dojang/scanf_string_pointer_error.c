#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char *s1 = "Hello";

	// 문자열 리터럴이 있는 메모리 주소는 읽기 전용
	printf("문자열을 입력하세요 ");
	scanf("%s", s1);

	printf("%s\n", s1);
}