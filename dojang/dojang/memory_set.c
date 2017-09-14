/*
memset(memory set) �Լ�: �޸��� ������ ���ϴ� ũ�⸸ŭ Ư�� ������ ����
��� ���� string.h, memory.h
���� char �迭�� ���� ������� �Լ�. ����Ʈ ����
*/
#include <stdio.h>
#include <stdlib.h>	// malloc, free �Լ��� ����� ��� ����
#include <string.h>	// memset �Լ��� ����� ��� ����

int main() {
	long long *numPtr = malloc(sizeof(long long));	// 8����Ʈ ũ�⸸ŭ ���� �޸� �Ҵ�

	//memset(numPtr, 0x27, 8);	// numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27�� ����
	memset(numPtr, 0, 8);	// memset�� �޸𸮸� ��� 0���� ���� �� �ַ� ���

	printf("0x%11x\n", *numPtr);

	free(numPtr);

	// char �迭�� ���ϴ� ���ڷ� ä�� �� ����
	char c[5];

	memset(c, 'a', 4);	// �ε��� 0~3 0x97�� ä��
	c[4] = '\0';	// �ε��� 4 ���ڿ��� ���� �ǹ��ϴ� �� ���ڷ� ä��

	printf("%s\n", c);

	return 0;
}