#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
	short length;	// 2����Ʈ
	int seq;	// 4����Ʈ
};
#pragma pack(pop)

int main()
{
	struct Packet pkt;

	printf("%d\n", sizeof(pkt));

	return 0;
}