#include <stdio.h>

struct Phone {
	int areacode;
	unsigned long long number;
};

struct Person {
	char name[20];
	int age;
	struct Phone phone;
};

int main()
{
	// 구조체 안의 구조체를 초기화하려면 {} 안에 {} 사용
	struct Person p1 = { .name = "Andrew",.age = 25, {.areacode = 82,.number = 3045671234 } };

	printf("%d %llu\n", p1.phone.areacode, p1.phone.number);

	struct Person p2 = { "Maria", 19, {82, 3087654321} };

	printf("%d %llu\n", p2.phone.areacode, p2.phone.number);

	return 0;
}