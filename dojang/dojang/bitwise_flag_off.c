#include <stdio.h>

int main() {
	unsigned char flag = 7;	// 0000 0111

	// ��Ʈ NOT, AND �������� �÷����� Ư�� ��Ʈ�� ��
	// ~mask�� 0�� ��Ʈ AND ������ ���� ��, ���� ��Ʈ�� 1�̵� 0�̵� �׻� 0�� ��
	flag &= ~2;	// ~2 = 1111 1101. 0000 0101

	printf("%u\n", flag);

	if (flag & 1)
		printf("0000 0001�� ���� ����\n");
	else
		printf("0000 0001�� ���� ����\n");

	if (flag & 2)
		printf("0000 0010�� ���� ����\n");
	else
		printf("0000 0010�� ���� ����\n");

	if (flag & 4)
		printf("0000 0100�� ���� ����\n");
	else
		printf("0000 0100�� ���� ����\n");

	return 0;
}