/* fread �Լ��� �б� ũ��� �б� Ƚ���� �����Ͽ� ���ڿ� �б�
   fgets�ʹ� �޸� \n�� �ֵ� ���� ������ ������ ũ�⸸ŭ ���� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char buffer[20] = { 0, };

	FILE *fp = fopen("hello.txt", "r");

	//fread(buffer, sizeof(buffer), 1, fp);
	fread(buffer, sizeof(buffer) - 1, 1, stdin);	// ���� ���� NULL�� �� �� �ֵ���
													// �б� ũ�⸦ ���� ũ�⺸�� 1 �۰� �����Ѵ�.

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}