#include <stdio.h>

#pragma pack(push, 1)	// 1����Ʈ ������ ����
struct PacketHeader {
	char flags;
	int seq;
};
#pragma pack(pop)	// ���� ������ ���� ���·� �ǵ���

int main()
{
	struct PacketHeader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));	// �е��� �����Ƿ� 5����Ʈ

	return 0;
}