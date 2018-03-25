/* 동적 메모리에서 동적 메모리로 내용 복사 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D *p1 = malloc(sizeof(struct Point2D));
	struct Point2D *p2 = malloc(sizeof(struct Point2D));

	p1->x = 10;
	p1->y = 20;

	memcpy(p2, p1, sizeof(struct Point2D));

	printf("%d %d\n", p2->x, p2->y);

	return 0;
}