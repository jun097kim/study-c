/*
�޸� ��� ����: malloc -> ��� -> free

malloc(memory allocation): �޸� �Ҵ�. ����Ʈ ����
free(������): �޸� ����

���� �޸� �Ҵ�: ���ϴ� ������ ���ϴ� ��ŭ �޸𸮸� �Ҵ��� �� �ִ�.
*/
#include <stdio.h>
#include <stdlib.h>	// malloc, free �Լ��� ����� ��� ����

int main() {
	int num1 = 10;	// ���� ������ Stack ������ ����. �Լ��� ������ �ڵ����� �޸� ����
	int *numPtr1;

	numPtr1 = &num1;

	int *numPtr2;
	numPtr2 = malloc(sizeof(int));
	/*
	4����Ʈ��ŭ �Ҵ�� �޸� �ּ� ��ȯ
	�����ϸ� �޸� �ּҸ� ��ȯ, �����ϸ� NULL�� ��ȯ

	malloc �Լ��� Heap ������ �޸� ���. �޸� ���� �ʼ�
	*/

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2);

	return 0;
}