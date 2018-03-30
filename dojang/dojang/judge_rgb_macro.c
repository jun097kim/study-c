#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define RGB(r, g, b) ((b) << 16 | (g) << 8 | (r))
#define RGB(r, g, b) ((unsigned int)((unsigned char)(b) << 16)	\
					| (unsigned short)((unsigned char)(g) << 8)	\
					| (unsigned char)(r))

/* r, g, b�� unsigned char�� ��ȯ�Ͽ� 8��Ʈ�� ����� ��ġ�� �ڸ��� ���� */
/* �������� 16�ڸ� �̵��� b�� unsigned int�� ��ȯ�Ͽ�
   32��Ʈ�� ����� ��ġ�� �ڸ��� ���� */
/* �������� 8�ڸ� �̵��� g�� unsigned short�� ��ȯ�Ͽ�
   16��Ʈ�� ����� ��ġ�� �ڸ��� ���� */

int main()
{
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);

	printf("#%06x\n", RGB(r, g, b));
	printf("#%06x\n", RGB(1 & 1, 2 & 2, 3 & 3));

	return 0;
}