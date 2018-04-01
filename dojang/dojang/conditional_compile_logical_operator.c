/* #if defined에는 논리 연산자를 사용할 수 있음 */
#include <stdio.h>

#define DEBUG
#define TEST

int main()
{
#if (defined DEBUG || defined TEST) && !defined (VERSION_10)
	printf("Debug\n");
#endif

	return 0;
}