#include <stdio.h>

int main() {
	int numArr[3][4];

	numArr[0][0] = 11;
	numArr[0][1] = 11;
	numArr[0][2] = 11;
	numArr[0][3] = 11;

	numArr[1][0] = 55;
	numArr[1][1] = 66;
	numArr[1][2] = 77;
	numArr[1][3] = 88;

	numArr[2][0] = 99;
	numArr[2][1] = 110;
	numArr[2][2] = 121;
	numArr[2][3] = 132;

	printf("%d\n", numArr[-1][-1]);	// 쓰레기 값
	printf("%d\n", numArr[0][4]);	// 가로 인덱스가 벗어나도록 지정하면 그 다음 세로 인덱스 요소
	printf("%d\n", numArr[4][0]);	// 쓰레기 값
	printf("%d\n", numArr[5][5]);	// 쓰레기 값

	return 0;
}