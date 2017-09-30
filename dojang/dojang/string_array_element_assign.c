#include <stdio.h>

int main() {
	// 배열 공간에 문자열 리터럴이 복사됨
	char s1[10] = "Hello";

	// 인덱스로 접근하여 문자 할당
	s1[0] = 'A';

	printf("%s\n", s1);
	return 0;
}