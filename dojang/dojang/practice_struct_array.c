#include <stdio.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p[3];

	p[0].x = 10;
	p[0].y = 20;
	p[1].x = 30;
	p[1].y = 40;
	p[2].x = 50;
	p[2].y = 60;

	for (int i = 0; i < sizeof(p) / sizeof(struct Point2D); i++)
	{
		printf("%d %d\n", p[i].x, p[i].y);
	}

	return 0;
}