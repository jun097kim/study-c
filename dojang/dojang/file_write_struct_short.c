#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push, 1)
struct Data {
	short num1;
	short num2;
	short num3;
	short num4;
};
#pragma pack(pop)

int main()
{
	struct Data d1;

	d1.num1 = 100;	// 0x64
	d1.num2 = 200;	// 0xC8
	d1.num3 = 300;	// 0x12C
	d1.num4 = 400;	// 0x190

	FILE *fp = fopen("data.bin", "wb");

	fwrite(&d1, sizeof(d1), 1, fp);

	fclose(fp);

	return 0;
}