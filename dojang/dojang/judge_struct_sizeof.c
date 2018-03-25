#include <stdio.h>

struct EncryptionHeader {
	char flags;	// 1바이트
	int a, b;	// 4바이트 단위로 정렬. 8바이트
};

int main()
{
	struct EncryptionHeader header;

	printf("%d\n", sizeof(header));

	return 0;
}