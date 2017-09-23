#include <stdio.h>

int main() {
	unsigned char flag = 7;

	// 비트 XOR 연산으로 플래그의 특정 비트를 토글
	// 플래그의 비트가 1이면, 마스크의 1과 같으므로 0
	// 플래그의 비트가 0이면, 마스크의 1과 다르므로 1
	flag ^= 2;
	flag ^= 8;

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

	if (flag & 8)
		printf("0000 1000은 켜져 있음\n");
	else
		printf("0000 1000은 꺼져 있음\n");

	return 0;
}