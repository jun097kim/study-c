/* fprintf 함수로 서식을 지정하여 문자열 쓰기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("hello.txt", "w");

	fprintf(fp, "%s %d\n", "Hello", 100);
	fprintf(stdout, "%s %d\n", "Hello", 100);

	fclose(fp);

	return 0;
}