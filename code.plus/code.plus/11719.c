/*
# \n�� ������ ���鵵 �Է�
* getchar(): \n�� �Է��ϸ� ������ ���� �ϳ��� ����
* getche(): ���� X. echo O
* getch(): ���� X. echo X
*/
#include <stdio.h>

int main() {
	char c;

	/*
	c�� �Ҵ�� ���ڰ� EOF���� ���Ѵ�.
	���� ������(���� ����)���� �� �������� ������ �� �����Ƿ� ��ȣ�� �ʿ��ϴ�.
	*/
	while ((c = getchar()) != EOF) {
		printf("%c", c);
	}

	return 0;
}