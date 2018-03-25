#include <stdio.h>

#pragma pack(push, 1)	// 1바이트 단위로 정렬
struct PacketHeader {
	char flags;
	int seq;
};
#pragma pack(pop)	// 정렬 설정을 이전 상태로 되돌림

int main()
{
	struct PacketHeader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));	// 패딩이 없으므로 5바이트

	return 0;
}