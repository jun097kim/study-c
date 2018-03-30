#include <stdio.h>

// 함수 모양의 매크로 정의: () 안에 자료형은 생략하고 인자의 이름만 지정
#define PRINT_NUM(x) printf("%d\n", x)

int main()
{
	PRINT_NUM(10);

	PRINT_NUM(20);

	return 0;
}