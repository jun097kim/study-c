/*
�Է��� �� ������ �־����� ���� ��쿡��
�Է��� EOF(Ctrl + Z + Enter)���� ������ �ȴ�.
*/
#include <stdio.h>

int main() {
	int a, b;

	while (scanf("%d %d", &a, &b) == 2) {	// scanf(): ���������� �Է¹��� ������ ���� ����
		printf("%d\n", a + b);
	}

	return 0;
}