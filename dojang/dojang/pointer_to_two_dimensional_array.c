#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	// 2차원 배열을 포인터에 바로 할당
	// 열 크기가 4인 1차원 배열을 가리키는 포인터. 배열 포인터
	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr);	// 첫 행(1차원 배열)의 주소. numArr[0]
	printf("%p\n", *numArr);	// 첫 행(1차원 배열)의 주소. numArr[0]

	// 배열 주소가 들어있는 포인터는 인덱스를 통해 요소에 접근 가능
	// 세 번째 행(1차원 배열)의 주소 -> 두 번째 요소
	printf("%d\n", numPtr[2][1]);
	
	printf("%d\n", sizeof(numArr));	//배열이 차지하는 전체 공간. 4 * 24 = 96
	printf("%d\n", sizeof(numPtr));	// 포인터의 크기. 4

	return 0;
}