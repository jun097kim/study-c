#include <stdio.h>

union Data {
	char c1;
	short num1;
	int num2;
};

int main()
{
	union Data d1;

	d1.num2 = 0x12345678;	// ��Ʋ ��Ƽ�𿡼��� �޸𸮿� ����� �� 78 56 34 12�� �����

	printf("0x%x\n", d1.num2);
	printf("0x%x\n", d1.num1);	// �� 2����Ʈ 56 78
	printf("0x%x\n", d1.c1);	// �� 1����Ʈ 78

	printf("%d\n", sizeof(union Data));

	return 0;
}