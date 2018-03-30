/* 구조체: 멤버들이 각각 공간을 차지한다.
 * 공용체: 멤버 중에서 가장 큰 자료형의 공간을 공유한다.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Box {
	short candy;
	float snack;
	char doll[8];
};

int main()
{
	union Box b1;

	printf("%d\n", sizeof(b1));	// 8: 공용체의 전체 크기는 가장 큰 자료형의 크기

	/*
	// 어느 한 멤버에 값을 저장하면 나머지 멤버의 값은 사용할 수 없음
	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);*/

	// 공용체는 멤버를 한 번에 하나씩만 쓸 수 있다.
	b1.candy = 10;
	printf("%d\n", b1.candy);

	b1.snack = 60000.0f;
	printf("%f\n", b1.snack);

	strcpy(b1.doll, "bear");
	printf("%s\n", b1.doll);

	return 0;
}