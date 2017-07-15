/*
입력이 몇 개인지 주어지지 않은 경우에는
입력을 EOF(Ctrl + Z + Enter)까지 받으면 된다.
*/
#include <stdio.h>

int main() {
	int a, b;

	while (scanf("%d %d", &a, &b) == 2) {	// scanf(): 성공적으로 입력받은 변수의 개수 리턴
		printf("%d\n", a + b);
	}

	return 0;
}