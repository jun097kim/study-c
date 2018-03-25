#include <stdio.h>
#include <stdlib.h>

struct Data {
	char c1;
	int *numPtr; // ����ü�� ����� ������
};

int main()
{
	int num1 = 10;
	struct Data d1;	// ����ü ����
	struct Data *d2 = malloc(sizeof(struct Data)); // ����ü �����Ϳ� �޸� �Ҵ�

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);	// ����ü ���� d1�� ��� numPtr�� ������
	printf("%d\n", *d2->numPtr);	// ����ü ������ d2�� ��� numPtr�� ������

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1);
	printf("%d\n", *(*d2).numPtr);	// ����ü �����͸� �������Ͽ� .���� ����� �����ϰ� �ٽ� ������

	free(d2);

	return 0;
}