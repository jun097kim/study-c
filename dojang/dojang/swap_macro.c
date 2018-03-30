#include <stdio.h>

// 매크로를 여러 번 사용했을 때 같은 이름으로 된 변수가 생기므로 {}로 감싸준다.
#define SWAP(a, b, type) /*do*/ {	\
	type temp;	\
	temp = a;	\
	a = b;		\
	b = temp;	\
} /*while (0)*/

int main()
{
	int num1 = 10;
	int num2 = 20;

	SWAP(num1, num2, int);
	printf("%d %d\n", num1, num2);

	float num3 = 1.5f;
	float num4 = 3.8f;

	SWAP(num3, num4, float);
	printf("%f %f\n", num3, num4);

	// SWAP 매크로를 do while(0) 없이 {} 만으로 정의하면
	// else, else if 전에 ;이 와서 컴파일 에러가 발생한다.
	if (num1 == 10)
		SWAP(num1, num2, int);
	else
		printf("10이 아님\n");

	return 0;
}