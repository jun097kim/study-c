#include <stdio.h>

#define MUL(a, b) a * b
#define ADD(a, b) a + b

int main()
{
	printf("%d\n", MUL(10, 20));
	printf("%d\n", MUL(1 + 2, 3 + 4));	// 1 + 2 * 3 + 4 = 11
										// 원하는 결과를 얻으려면 매크로의 인자와

	printf("%d\n", ADD(1, 2));
	printf("%d\n", ADD(1, 2) * 3);		// 1 + 2 * 3 = 7
										// 매크로의 결과를 괄호로 묶어주면 된다.

	return 0;
}