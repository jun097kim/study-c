/* fgets 함수로 널 문자를 포함하여 버퍼 크기만큼 문자열 읽기
   단, 줄바꿈이 있으면 \n까지만 읽음 */
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