/* #ifdef: 매크로가 정의되어 있다면 코드를 컴파일 */
#include <stdio.h>

#define DEBUG

int main()
{
#ifdef DEBUG
	printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

	return 0;
}