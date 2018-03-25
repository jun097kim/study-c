/* 구조체 정렬: 가장 큰 자료형의 배수로 정렬한다. */
#include <stdio.h>

struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	struct PacketHeader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));

	// 구조체 전체 크기는 5바이트가 아닌 8바이트
	// char flags 1바이트 + 패딩 3바이트 + int seq 4바이트
	printf("%d\n", sizeof(header));
	printf("%d\n", sizeof(struct PacketHeader));

	return 0;
}