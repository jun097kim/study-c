#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct Data {
	char c1;
	short num1;
	int num2;
	char s1[20];
};
#pragma pack(pop)

int main()
{
	struct Data d1;
	memset(&d1, 0, sizeof(d1));

	d1.c1 = 'a';			// 0x61
	d1.num1 = 32100;		// 0x7D64‬
	d1.num2 = 2100000100;	//‭ 0x7D2B7564
	strcpy(d1.s1, "Hello, world!");

	FILE *fp = fopen("data2.bin", "wb");

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}