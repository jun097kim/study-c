#include <stdio.h>
#include <stddef.h>

struct Data {
	char mode;
	int count;
};

int main()
{
	size_t size = sizeof(int);
	size_t offset = offsetof(struct Data, count);

	printf("%zd %zd\n", size, offset);

	return 0;
}