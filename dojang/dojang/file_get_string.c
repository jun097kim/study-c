/* fgets �Լ��� �� ���ڸ� �����Ͽ� ���� ũ�⸸ŭ ���ڿ� �б�
   ��, �ٹٲ��� ������ \n������ ���� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char buffer[20];

	FILE *fp = fopen("hello.txt", "r");

	//fgets(buffer, sizeof(buffer), fp);
	fgets(buffer, sizeof(buffer), stdin);

	//printf("%s\n", buffer);
	fputs(buffer, stdout);

	fclose(fp);

	return 0;
}