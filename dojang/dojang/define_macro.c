#include <stdio.h>

#define ARRAY_SIZE 10

int main()
{
	char s1[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		s1[i] = 97 + i;
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%c ", s1[i]);
	}

	return 0;
}