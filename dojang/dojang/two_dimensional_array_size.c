#include <stdio.h>

int main() {
	int numArr[3][4] = {
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", sizeof(numArr));	// 4 * 3 * 4 = 48

	// 열 개수. 한 행의 크기 / 요소의 크기
	int col = sizeof(numArr[0]) / sizeof(int);

	// 행 개수. 배열이 차지하는 전체 공간 / 한 행의 크기
	int row = sizeof(numArr) / sizeof(numArr[0]);

	printf("%d\n", col);
	printf("%d\n", row);

	return 0;
}