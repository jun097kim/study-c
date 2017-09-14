#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
	int num2;

	int *numPtr1, *numPtr2;
	
	// 메모리를 할당해주어야 한다.
	numPtr1 = malloc(sizeof(int));
	numPtr2 = malloc(sizeof(int));

	scanf("%d %d", &num1, &num2);

	*numPtr1 = num1;	// 포인터를 역참조하여 값을 저장하려면,
	*numPtr2 = num2;

	printf("%d\n", *numPtr1 + *numPtr2);

	free(numPtr1);
	free(numPtr2);

	return 0;
}