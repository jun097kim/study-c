#include <stdio.h>

int main() {
	int *numPtr = 0x100;

	printf("%d\n", *numPtr);	// 잘못된 메모리 주소에 역참조하므로 실행 에러

	return 0;
}