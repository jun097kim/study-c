/*
# \n과 선후행 공백도 입력
* getchar(): \n을 입력하면 버퍼의 값을 하나씩 꺼냄
* getche(): 버퍼 X. echo O
* getch(): 버퍼 X. echo X
*/
#include <stdio.h>

int main() {
	char c;

	/*
	c에 할당된 문자가 EOF인지 평가한다.
	대입 연산자(가장 낮음)보다 비교 연산자의 순위가 더 높으므로 괄호가 필요하다.
	*/
	while ((c = getchar()) != EOF) {
		printf("%c", c);
	}

	return 0;
}