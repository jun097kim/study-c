#include <stdio.h>

struct EncryptionHeader {
	char flags;	// 1����Ʈ
	int a, b;	// 4����Ʈ ������ ����. 8����Ʈ
};

int main()
{
	struct EncryptionHeader header;

	printf("%d\n", sizeof(header));

	return 0;
}