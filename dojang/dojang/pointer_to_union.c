#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main()
{
	union Box b1;
	union Box *ptr;

	ptr = &b1;

	strcpy(ptr->doll, "bear");

	printf("%d\n", ptr->candy);
	printf("%f\n", ptr->snack);
	printf("%s\n", ptr->doll);

	return 0;
}