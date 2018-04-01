/* #ifndef: 매크로가 정의되어 있지 않을 때 코드를 컴파일 */
#include <stdio.h>

#define NDEBUG

int main()
{
#ifndef DEBUG
	printf("main function\n");
#endif

	return 0;
}