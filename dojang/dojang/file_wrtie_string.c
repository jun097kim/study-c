/* fwrite 함수로 쓰기 크기와 쓰기 횟수를 지정하여 파일에 문자열 쓰기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Hello, world!";

	FILE *fp = fopen("hello.txt", "w");

	fwrite(s1, strlen(s1), 1, fp);
	fwrite(s1, strlen(s1), 1, stdout);

	fclose(fp);

	return 0;
}