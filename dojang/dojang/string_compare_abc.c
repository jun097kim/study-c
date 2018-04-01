#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strcmp("aaa", "aaa"));
	printf("%d\n", strcmp("aab", "aaa"));
	printf("%d\n", strcmp("aab", "aac"));

	return 0;
}