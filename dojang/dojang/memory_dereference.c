#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numPtr;
	numPtr = malloc(sizeof(int));

	*numPtr = 10;				// 포인터를 역참조하여 값을 저장함
	printf("%d\n", *numPtr);	// 포인터를 역참조하여 값을 가져옴

	free(numPtr);

	return 0;
}