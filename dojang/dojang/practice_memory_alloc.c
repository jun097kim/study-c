#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int *numPtr1 = malloc(sizeof(int));
	long long *numPtr2 = malloc(sizeof(long long));

	*numPtr1 = INT_MAX;
	*numPtr2 = LLONG_MAX;

	printf("%d %lld\n", *numPtr1, *numPtr2);

	free(numPtr1);
	free(numPtr2);

	return 0;
}