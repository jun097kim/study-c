/* fscanf 함수로 서식을 지정하여 문자열 읽기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];
	int num1;

	FILE *fp = fopen("hello.txt", "r");

	//fscanf(fp, "%s %d", s1, &num1);
	fscanf(stdin, "%s %d", s1, &num1);

	printf("%s %d\n", s1, num1);

	fclose(fp);

	return 0;
}