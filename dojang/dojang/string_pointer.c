#include <stdio.h>

int main() {
	char c1 = 'a';

	// 문자열 리터럴을 포인터에 할당하는 방식
	// 문자열 리터럴이 있는 메모리 주소 저장
	char *s1 = "Hello";

	printf("%c\n", c1);
	printf("%s\n", s1);

	return 0;
}