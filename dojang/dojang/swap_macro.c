#include <stdio.h>

// ��ũ�θ� ���� �� ������� �� ���� �̸����� �� ������ ����Ƿ� {}�� �����ش�.
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

	// SWAP ��ũ�θ� do while(0) ���� {} ������ �����ϸ�
	// else, else if ���� ;�� �ͼ� ������ ������ �߻��Ѵ�.
	if (num1 == 10)
		SWAP(num1, num2, int);
	else
		printf("10�� �ƴ�\n");

	return 0;
}