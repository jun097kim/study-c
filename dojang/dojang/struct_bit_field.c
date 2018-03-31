/* 구조체 비트 필드: 구조체 멤버를 비트 단위로 저장 */
#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 7;
};
int main()
{
	struct Flags f1;

	f1.a = 1;	// 0000 0001, 비트 1개
	f1.b = 15;	// 0000 1111, 비트 4개
	f1.c = 255;	// 1111 1111, 비트 8개


	printf("%u\n", f1.a);	//   1 = 0000 0001, 비트 1개만 저장됨
	printf("%u\n", f1.b);	//   7 = 0000 0111, 비트 3개만 저장됨
	printf("%u\n", f1.c);	// 127 = 0111 1111, 비트 7개만 저장됨

	return 0;
}