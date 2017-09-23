#include <stdio.h>

int main() {
	unsigned char flag = 7;	// 0000 0111

	// 비트 NOT, AND 연산으로 플래그의 특정 비트를 끔
	// ~mask의 0은 비트 AND 연산을 했을 때, 원래 비트가 1이든 0이든 항상 0이 됨
	flag &= ~2;	// ~2 = 1111 1101. 0000 0101

	printf("%u\n", flag);

	if (flag & 1)
		printf("0000 0001은 켜져 있음\n");
	else
		printf("0000 0001은 꺼져 있음\n");

	if (flag & 2)
		printf("0000 0010은 켜져 있음\n");
	else
		printf("0000 0010은 꺼져 있음\n");

	if (flag & 4)
		printf("0000 0100은 켜져 있음\n");
	else
		printf("0000 0100은 꺼져 있음\n");

	return 0;
}