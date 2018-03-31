/* fputs 함수로 파일에 문자열 쓰기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = fopen("hello.txt", "w");

	fputs("Hello, world!", fp);
	fputs("Hello, world!", stdout);

	fclose(fp);

	return 0;
}