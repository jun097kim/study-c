#include <stdio.h>

#define MUL(a, b) a * b
#define ADD(a, b) a + b

int main()
{
	printf("%d\n", MUL(10, 20));
	printf("%d\n", MUL(1 + 2, 3 + 4));	// 1 + 2 * 3 + 4 = 11
										// ���ϴ� ����� �������� ��ũ���� ���ڿ�

	printf("%d\n", ADD(1, 2));
	printf("%d\n", ADD(1, 2) * 3);		// 1 + 2 * 3 = 7
										// ��ũ���� ����� ��ȣ�� �����ָ� �ȴ�.

	return 0;
}