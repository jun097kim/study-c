#include <stdio.h>
#include <stdlib.h>

int main() {
	//char s1[31], s2[31], s3[31], s4[31];
	char *s1, *s2, *s3, *s4;

	s1 = malloc(sizeof(char) * 31);
	s2 = malloc(sizeof(char) * 31);
	s3 = malloc(sizeof(char) * 31);
	s4 = malloc(sizeof(char) * 31);

	scanf("%s %s %s %s", s1, s2, s3, s4);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);

	return 0;
}