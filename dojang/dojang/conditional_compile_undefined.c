/* #ifndef: ��ũ�ΰ� ���ǵǾ� ���� ���� �� �ڵ带 ������ */
#include <stdio.h>

#define NDEBUG

int main()
{
#ifndef DEBUG
	printf("main function\n");
#endif

	return 0;
}