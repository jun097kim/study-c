#include <stdio.h>

int main() {
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };

	// ����Ʈ ������ �̿� X
	/*int powerOfTwo = 1;
	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--) {
		decimal += binary[i] * powerOfTwo;
		powerOfTwo *= 2;
	}*/

	// ����Ʈ ������ �̿�
	int position = 0;
	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--) {
		if (binary[i] == 1) {
			decimal += 1 << position;
		}
		position++;
	}

	printf("%d\n", decimal);

	return 0;
}