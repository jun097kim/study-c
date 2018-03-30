#include <stdio.h>

union Data {
	char c1;
	int num1;
};

int main()
{
	union Data d1;

	d1.num1 = 0x1111;

	printf("0x%x %d\n", d1.c1, sizeof(d1));

	return 0;
}