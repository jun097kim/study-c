#include <stdio.h>
#include <stdlib.h>

struct Data {
	char c1;
	int *numPtr; // 구조체의 멤버가 포인터
};

int main()
{
	int num1 = 10;
	struct Data d1;	// 구조체 변수
	struct Data *d2 = malloc(sizeof(struct Data)); // 구조체 포인터에 메모리 할당

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);	// 구조체 변수 d1의 멤버 numPtr을 역참조
	printf("%d\n", *d2->numPtr);	// 구조체 포인터 d2의 멤버 numPtr을 역참조

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1);
	printf("%d\n", *(*d2).numPtr);	// 구조체 포인터를 역참조하여 .으로 멤버에 접근하고 다시 역참조

	free(d2);

	return 0;
}