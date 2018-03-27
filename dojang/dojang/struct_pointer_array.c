#include <stdio.h>
#include <stdlib.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	/* 포인터 배열 선언: 포인터 변수 이름 뒤에 []를 붙인 뒤 크기를 지정한다. */
	struct Point2D *p[3];

	// 요소 개수 = 포인터 배열 전체 크기 / 포인터 크기
	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++)
	{
		p[i] = malloc(sizeof(struct Point2D));
	}

	p[0]->x = 10;
	p[0]->y = 20;
	p[1]->x = 30;
	p[1]->y = 40;
	p[2]->x = 50;
	p[2]->y = 60;

	printf("%d %d\n", p[0]->x, p[0]->y);
	printf("%d %d\n", p[1]->x, p[1]->y);
	printf("%d %d\n", p[2]->x, p[2]->y);

	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++)
	{
		free(p[i]);
	}

	return 0;
}