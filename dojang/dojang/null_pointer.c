/*
널 포인터(null pointer): NULL이 들어있는 포인터. 아무것도 가리키지 않는 상태
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numPtr1 = NULL;

	// 널 포인터이면 메모리 할당하는 패턴
	if (numPtr1 = NULL)
	{
		numPtr1 = malloc(1024);
	}

	free(numPtr1);

	return 0;
}