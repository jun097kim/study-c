#include <stdio.h>

int main() {
	unsigned char flag = 0;

	// ��Ʈ OR �������� �÷����� Ư�� ��Ʈ�� ��
	flag |= 1;
	flag |= 2;
	flag |= 4;

	printf("%u\n", flag);	// 0000 0111

	// ��Ʈ AND �������� �÷����� Ư�� ��Ʈ�� ���� �ִ��� Ȯ��
	// ���� �ִ� ��Ʈ�� ����ũ ���� ��Ʈ AND ������ 0�� ����
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