/* 매크로에서 ##을 사용하여 값 붙이기 */
#include <stdio.h>

#define CONCAT(a, b) a##b

int main()
{
	printf("%d\n", CONCAT(1, 2));

	return 0;
}