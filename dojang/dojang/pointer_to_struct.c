#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1;	// ����ü ����
	struct Person *ptr;	// ����ü ������

	ptr = &p1;

	ptr->age = 30;

	printf("����: %d\n", p1.age);	// ����ü ������ ��� ���
	printf("����: %d\n", ptr->age);	// ����ü �������� ��� ���

	return 0;
}