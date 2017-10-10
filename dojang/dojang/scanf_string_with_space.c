#include <stdio.h>

int main() {
	char s1[30];

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);
	
	return 0;
}