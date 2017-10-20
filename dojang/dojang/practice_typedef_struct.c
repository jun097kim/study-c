#include <stdio.h>

typedef struct _Point2d {
	int x;
	int y;
} Point2d;

int main() {
	Point2d p1;

	p1.x = 10;
	p1.y = 20;

	printf("%d %d\n", p1.x, p1.y);

	return 0;
}