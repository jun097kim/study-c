#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	char **matrix = malloc(sizeof(char *) * m);
	for (int i = 0; i < m; i++)
		matrix[i] = malloc(sizeof(char) * (n + 1));

	// 행렬 입력
	for (int i = 0; i < m; i++)
		scanf("%s", matrix[i]);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if (matrix[i][j] != '*') {
				int cnt = 0;

				for (int next_i = i - 1; next_i <= i + 1; next_i++) {
					// 행 유효 범위 벗어나면 건너띔
					if (!(0 <= next_i && next_i < n)) continue;

					for (int next_j = j - 1; next_j <= j + 1; next_j++) {
						// 열 유효 범위 벗어나면 건너띔
						if (!(0 <= next_j && next_j < n)) continue;

						if (matrix[next_i][next_j] == '*') cnt++;
					}
				}
				printf("%d", cnt);
			}
			else printf("*");

		}
		printf("\n");
	}

	return 0;
}