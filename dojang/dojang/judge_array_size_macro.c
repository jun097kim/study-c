#include <stdio.h>

struct Point2D {
	float x, y;
};

//#define ARRSIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRSIZE(arr) (sizeof(arr) / sizeof(*arr))

int main()
{
	int numArr1[10];
	long long numArr2[5];
	struct Point2D p[3];

	printf("%d\n", ARRSIZE(numArr1));
	printf("%d\n", ARRSIZE(numArr2));
	printf("%d\n", ARRSIZE(p));

	return 0;
}