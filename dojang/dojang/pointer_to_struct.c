#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1;	// 구조체 변수
	struct Person *ptr;	// 구조체 포인터

	ptr = &p1;

	ptr->age = 30;

	printf("나이: %d\n", p1.age);	// 구조체 변수의 멤버 출력
	printf("나이: %d\n", ptr->age);	// 구조체 포인터의 멤버 출력

	return 0;
}