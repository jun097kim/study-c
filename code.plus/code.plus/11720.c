// %1d: %d ���̿� ���� ������, �� ���̸�ŭ �Է�
#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	while (n--) {
		int x;

		/*
		scanf(): �Է� ���۰� ������� �� Ű����κ��� �Է¹޴� �Լ�
		�Է� ���ۿ� �����͸� �����ߴٰ� �� ���ھ� �����
		*/
		scanf("%1d", &x);
		//printf("%d", x);
		sum += x;
	}

	printf("%d", sum);

	return 0;
}