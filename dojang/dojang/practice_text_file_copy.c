#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int count;
	char buffer[5] = { 0, };

	FILE *src = fopen("hello.txt", "r");
	FILE *dest = fopen("hello2.txt", "w");

	while (feof(src) == 0)
	{
		count = fread(buffer, sizeof(char), 4, src);
		printf("%s", buffer);
		fwrite(buffer, sizeof(char), count, dest);	// 파일 끝부분에서 읽은 크기만큼만 저장하기 위해
													// 4가 아닌 count를 지정
		memset(buffer, 0, 5);
	}

	fclose(src);
	fclose(dest);

	return 0;
}