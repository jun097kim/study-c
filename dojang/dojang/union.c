/* ����ü: ������� ���� ������ �����Ѵ�.
 * ����ü: ��� �߿��� ���� ū �ڷ����� ������ �����Ѵ�.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main()
{
	union Box b1;

	printf("%d\n", sizeof(b1));	// 8: ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ��

	/*
	// ��� �� ����� ���� �����ϸ� ������ ����� ���� ����� �� ����
	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);*/

	// ����ü�� ����� �� ���� �ϳ����� �� �� �ִ�.
	b1.candy = 10;
	printf("%d\n", b1.candy);

	b1.snack = 60000.0f;
	printf("%f\n", b1.snack);

	strcpy(b1.doll, "bear");
	printf("%s\n", b1.doll);

	return 0;
}