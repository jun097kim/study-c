#include <stdio.h>

int main() {
	char *s1 = "Hello";

	// 문자열 리터럴이 있는 메모리 주소는 읽기 전용
	s1[0] = 'A';

	return 0;
}