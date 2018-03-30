#include <stdio.h>

int main()
{
	char s1[10];

	for (int i = 0; i < 10; i++)
	{
		s1[i] = 97 + i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%c ", s1[i]);
	}

	return 0;
}