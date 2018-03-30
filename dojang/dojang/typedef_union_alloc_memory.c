#include <stdio.h>
#include <stdlib.h>

typedef union _Box {
	short candy;
	float snack;
	char doll[8];
} Box;

int main()
{
	Box *b1 = malloc(sizeof(Box));
}