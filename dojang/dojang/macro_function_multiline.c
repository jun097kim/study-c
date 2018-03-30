#include <stdio.h>

#define PRINT_NUM3(x)	printf("%d\n", x); \
						printf("%d\n", x + 1); \
						printf("%d\n", x + 2);

int main()
{
	PRINT_NUM3(10);

	PRINT_NUM3(20);

	return 0;
}