#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person *p1 = malloc(sizeof(struct Person));

	// 화살표 연산자로 구조체 포인터의 멤버에 접근
	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	/*printf("이름: %s\n", p1->name);
	printf("나이: %d\n", p1->age);
	printf("주소: %s\n", p1->address);*/

	// 구조체 포인터를 역참조하여 .으로 멤버에 접근
	printf("이름: %s\n", (*p1).name);
	printf("나이: %d\n", (*p1).age);
	printf("주소: %s\n", (*p1).address);

	free(p1);

	return 0;
}