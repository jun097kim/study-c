#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int readData(char *buffer, int offset, int size, FILE *fp)
{
	int count;

	if (feof(fp) == 1)
		return 0;

	fseek(fp, offset, SEEK_SET);
	count = fread(buffer, sizeof(char), size, fp);	// 1바이트씩 3번 읽으므로 fread의 반환값이 3

	return count;
}

int main()
{
	char buffer[10] = { 0, };
	int count;

	FILE *fp = fopen("hello.txt", "r");

	count = readData(buffer, 9, 3, fp);

	printf("%s, count: %d\n", buffer, count);

	fclose(fp);

	return 0;
}