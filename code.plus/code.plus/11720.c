// %1d: %d 사이에 수를 넣으면, 그 길이만큼 입력
#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	while (n--) {
		int x;

		/*
		scanf(): 입력 버퍼가 비어있을 때 키보드로부터 입력받는 함수
		입력 버퍼에 데이터를 저장했다가 한 문자씩 비워짐
		*/
		scanf("%1d", &x);
		//printf("%d", x);
		sum += x;
	}

	printf("%d", sum);

	return 0;
}