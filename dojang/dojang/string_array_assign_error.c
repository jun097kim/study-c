#include <stdio.h>

int main() {
	char s1[10];

	// 이미 선언된 배열에 문자열을 할당할 수 없다.
	s1 = "Hello";
	
	printf("%s\n", s1);

	return 0;
}