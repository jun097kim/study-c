/*
�� ������(null pointer): NULL�� ����ִ� ������. �ƹ��͵� ����Ű�� �ʴ� ����
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *numPtr1 = NULL;

	// �� �������̸� �޸� �Ҵ��ϴ� ����
	if (numPtr1 = NULL)
	{
		numPtr1 = malloc(1024);
	}

	free(numPtr1);

	return 0;
}