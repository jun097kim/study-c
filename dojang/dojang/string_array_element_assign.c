#include <stdio.h>

int main() {
	// �迭 ������ ���ڿ� ���ͷ��� �����
	char s1[10] = "Hello";

	// �ε����� �����Ͽ� ���� �Ҵ�
	s1[0] = 'A';

	printf("%s\n", s1);
	return 0;
}