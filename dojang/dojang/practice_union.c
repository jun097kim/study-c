#include <stdio.h>

union Data {
	short num1;
	char c1;
};

int main()
{
	union Data d1;

	d1.num1 = 0x5678;

	printf("0x%x 0x%x\n", d1.num1, d1.c1);

	return 0;
}