#include <stdio.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	// 구조체 배열을 선언하면서 초기화
	struct Point2D p1[3] = { {.x = 10,.y = 20}, {.x = 30,.y = 40}, {.x = 50,.y = 60} };

	printf("%d %d\n", p1[0].x, p1[0].y);
	printf("%d %d\n", p1[1].x, p1[1].y);
	printf("%d %d\n", p1[2].x, p1[2].y);

	struct Point2D p2[3] = { {10, 20}, {30, 40}, {50, 60} };

	printf("%d %d\n", p2[0].x, p2[0].y);
	printf("%d %d\n", p2[1].x, p2[1].y);
	printf("%d %d\n", p2[2].x, p2[2].y);

	// 모든 요소의 멤버를 0으로 초기화
	struct Point2D p3[3] = { 0 };

	printf("%d %d\n", p3[0].x, p3[0].y);
	printf("%d %d\n", p3[1].x, p3[1].y);
	printf("%d %d\n", p3[2].x, p3[2].y);

	return 0;
}