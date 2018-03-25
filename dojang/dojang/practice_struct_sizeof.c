#include <stdio.h>

struct CompressHeader {
	char flags;		// 1바이트
	int version;	// 4바이트
};

int main()
{
	struct CompressHeader header;

	//printf("%d\n", sizeof(header));
	//printf("%d\n", sizeof header);
	printf("%d\n", sizeof(struct CompressHeader));

	return 0;
}