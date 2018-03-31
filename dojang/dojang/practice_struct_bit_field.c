#include <stdio.h>

struct Flags {
	unsigned int a : 2;
	unsigned int b : 1;
	unsigned int c : 6;
};

int main()
{
	struct Flags f1;

	f1.a = 0xffffffff;
	f1.b = 0xffffffff;
	f1.c = 0xffffffff;

	printf("%u %u %u\n", f1.a, f1.b, f1.c);

	return 0;
}