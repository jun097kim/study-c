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

	memset(p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1->x, p1->y);

	free(p1);

	return 0;
}