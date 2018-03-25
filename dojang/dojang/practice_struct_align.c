#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
	short length;	// 2바이트
	int seq;	// 4바이트
};
#pragma pack(pop)

int main()
{
	struct Packet pkt;

	printf("%d\n", sizeof(pkt));

	return 0;
}