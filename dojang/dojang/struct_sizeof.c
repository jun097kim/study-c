/* ����ü ����: ���� ū �ڷ����� ����� �����Ѵ�. */
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

	// ����ü ��ü ũ��� 5����Ʈ�� �ƴ� 8����Ʈ
	// char flags 1����Ʈ + �е� 3����Ʈ + int seq 4����Ʈ
	printf("%d\n", sizeof(header));
	printf("%d\n", sizeof(struct PacketHeader));

	return 0;
}