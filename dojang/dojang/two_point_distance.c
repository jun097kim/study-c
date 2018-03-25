#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	int a = p2.x - p1.x;
	int b = p2.y - p1.y;

	//double c = sqrt((a * a) + (b * b));
	double c = sqrt(pow(a, 2) + pow(b, 2));

	printf("%f\n", c);

	return 0;
}