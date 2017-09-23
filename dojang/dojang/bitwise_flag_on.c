#include <stdio.h>

int main() {
	unsigned char flag = 0;

	// 비트 OR 연산으로 플래그의 특정 비트를 켬
	flag |= 1;
	flag |= 2;
	flag |= 4;

	printf("%u\n", flag);	// 0000 0111

	// 비트 AND 연산으로 플래그의 특정 비트가 켜져 있는지 확인
	// 꺼져 있는 비트와 마스크 값의 비트 AND 연산은 0이 나옴
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