#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 7;
};

int main()
{
	printf("%d", sizeof(struct Flags));

	return 0;
}