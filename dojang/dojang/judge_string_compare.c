#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 31);
	char *s2 = malloc(sizeof(char) * 31);

	scanf("%s %s", s1, s2);

	printf("%d\n", strcmp(s1, s2));

	return 0;
}