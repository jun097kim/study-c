/* fseek: ���������� �̵��� �Ÿ���ŭ �̵� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int size;
	FILE *fp = fopen("hello.txt", "r+");
	fputs("Hello, world!", fp);
	
	fseek(fp, 0, SEEK_END);	// ���� �����͸� ������ ������ �̵���Ŵ
	size = ftell(fp);		// ���� �������� ���� ��ġ�� ����

	printf("%d\n", size);

	fclose(fp);

	return 0;
}