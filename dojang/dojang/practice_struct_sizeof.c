#include <stdio.h>

struct CompressHeader {
	char flags;		// 1����Ʈ
	int version;	// 4����Ʈ
};

int main()
{
	struct CompressHeader header;

	//printf("%d\n", sizeof(header));
	//printf("%d\n", sizeof header);
	printf("%d\n", sizeof(struct CompressHeader));

	return 0;
}