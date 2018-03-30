#include <stdio.h>

// 매크로로 들어오는 인자 값을 붙여서 함수 호출
#define EXECUTOR(x) hello##x()

void hello1()
{
	printf("hello 1\n");
}

void hello2()
{
	printf("hello 2\n");
}

int main()
{
	EXECUTOR(1);

	EXECUTOR(2);

	return 0;
}