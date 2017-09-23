#include <stdio.h>

int main() {
	unsigned long long num1;

	scanf("%llu", &num1);

	printf("%llu\n", num1 << 20 >> 4);

	return 0;
}