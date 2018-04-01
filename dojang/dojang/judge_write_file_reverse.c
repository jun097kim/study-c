#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp)
{
	int size;
	int currPos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	fseek(fp, currPos, SEEK_SET);

	return size;
}

/*int main()
{
	char buffer[1] = { 0 };
	int size;

	FILE *fp = fopen("words.txt", "r");

	size = getFileSize(fp);

	for (int i = 1; i <= size; i++)
	{
		fseek(fp, -i, SEEK_END);
		fread(buffer, sizeof(char), 1, fp);
		fwrite(buffer, sizeof(char), 1, stdout);
	}
	
	fclose(fp);

	return 0;
}*/

int main()
{
	char *buffer;
	int size;

	FILE *fp = fopen("words.txt", "r");

	size = getFileSize(fp);

	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);

	fread(buffer, size, 1, fp);

	for (int i = size - 1; i >= 0; i--)
	{
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	}
}