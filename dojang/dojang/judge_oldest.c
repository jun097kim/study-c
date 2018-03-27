#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[30];
	int age;
};

int main()
{
	struct Person *p[5];

	p[0] = malloc(sizeof(struct Person));
	scanf("%s %d", p[0]->name, &p[0]->age);
	struct Person *oldest = p[0];

	for (int i = 1; i < sizeof(p) / sizeof(struct Person *); i++)
	{
		p[i] = malloc(sizeof(struct Person));
		scanf("%s %d", p[i]->name, &p[i]->age);

		if (oldest->age < p[i]->age) oldest = p[i];
	}
	printf("%s\n", oldest->name);

	for (int i = 1; i < sizeof(p) / sizeof(struct Person *); i++)
	{
		free(p[i]);
	}

	return 0;
}