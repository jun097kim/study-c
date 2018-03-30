#include <stdio.h>

union Data {
	char c1;
	short num1;
	int num2;
};

int main()
{
	union Data d1;

	d1.num2 = 0x12345678;	// 리틀 엔티언에서는 메모리에 저장될 때 78 56 34 12로 저장됨

	printf("0x%x\n", d1.num2);
	printf("0x%x\n", d1.num1);	// 앞 2바이트 56 78
	printf("0x%x\n", d1.c1);	// 앞 1바이트 78

	printf("%d\n", sizeof(union Data));

	return 0;
}