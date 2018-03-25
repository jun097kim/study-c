/* offsetof ��ũ��: ����ü�� ����� �����ϸ� �ش� ����� ��� ��ġ�� ��ȯ */
#include <stdio.h>
#include <stddef.h>

struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	printf("%d\n", offsetof(struct PacketHeader, flags));	// ù ����� ��� ��ġ�� 0
	printf("%d\n", offsetof(struct PacketHeader, seq));	// 4 = char flags 1����Ʈ + �е� 3����Ʈ

	return 0;
}