#include <stdio.h>

#define PRINT_NUM3(x)	printf("%d\n", x); \
						printf("%d\n", x + 1); \
						printf("%d\n", x + 2);
						

int main()
{
	int num1 = 1;

	// if, for, while에 여러 줄로 된 매크로를 사용할 때는
	// 반드시 중괄호로 묶어주어야 한다.
	if (num1 == 2)
		PRINT_NUM3(10)	// 11
						// 12

	return 0;
}