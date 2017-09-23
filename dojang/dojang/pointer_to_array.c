#include <stdio.h>

int main() {
	int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	int *numPtr = numArr;

	printf("%d\n", *numPtr);	// 배열 주소가 들어있는 포인터를 역참조하면 첫 번째 요소 값
	printf("%d\n", *numArr);	// 배열 자체를 역참조해도 첫 번째 요소 값

	// 배열 주소가 들어있는 포인터는 인덱스를 통해 요소에 접근 가능
	printf("%d\n", numPtr[5]);

	printf("%d\n", sizeof(numArr));	// sizeof(배열): 배열이 차지하는 전체 공간
	printf("%d\n", sizeof(numPtr));	// sizeof(배열 주소가 들어있는 포인터): 포인터 크기

	return 0;
}