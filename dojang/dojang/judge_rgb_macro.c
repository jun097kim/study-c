#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define RGB(r, g, b) ((b) << 16 | (g) << 8 | (r))
#define RGB(r, g, b) ((unsigned int)((unsigned char)(b) << 16)	\
					| (unsigned short)((unsigned char)(g) << 8)	\
					| (unsigned char)(r))

/* r, g, b를 unsigned char로 변환하여 8비트만 남기고 넘치는 자릿수 제거 */
/* 왼쪽으로 16자리 이동한 b를 unsigned int로 변환하여
   32비트만 남기고 넘치는 자릿수 제거 */
/* 왼쪽으로 8자리 이동한 g를 unsigned short로 변환하여
   16비트만 남기고 넘치는 자릿수 제거 */

int main()
{
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);

	printf("#%06x\n", RGB(r, g, b));
	printf("#%06x\n", RGB(1 & 1, 2 & 2, 3 & 3));

	return 0;
}