#include <stdio.h>
#include <stdbool.h>

struct Item {
	char name[100];
	int price;
	bool limited;
};

int main()
{
	struct Item item1 = { "베를린 필하모닉 베토벤 교향곡 전집", 100000, false };
	struct Item *ptr;

	ptr = &item1;

	ptr->limited = true;

	if (ptr->limited == true)
		printf("한정판\n");
	else
		printf("일반판\n");

	return 0;
}