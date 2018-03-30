#include <stdio.h>

#define COUNT 10

int main()
{
	printf("%d\n", COUNT);

#undef COUNT
#define COUNT 20

	printf("%d\n", COUNT);

	return 0;
}