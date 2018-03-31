/* ����ü ��Ʈ �ʵ�: ����ü ����� ��Ʈ ������ ���� */
#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 7;
};
int main()
{
	struct Flags f1;

	f1.a = 1;	// 0000 0001, ��Ʈ 1��
	f1.b = 15;	// 0000 1111, ��Ʈ 4��
	f1.c = 255;	// 1111 1111, ��Ʈ 8��


	printf("%u\n", f1.a);	//   1 = 0000 0001, ��Ʈ 1���� �����
	printf("%u\n", f1.b);	//   7 = 0000 0111, ��Ʈ 3���� �����
	printf("%u\n", f1.c);	// 127 = 0111 1111, ��Ʈ 7���� �����

	return 0;
}