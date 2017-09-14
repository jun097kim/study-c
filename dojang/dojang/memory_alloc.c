/*
메모리 사용 패턴: malloc -> 사용 -> free

malloc(memory allocation): 메모리 할당. 바이트 단위
free(포인터): 메모리 해제

동적 메모리 할당: 원하는 시점에 원하는 만큼 메모리를 할당할 수 있다.
*/
#include <stdio.h>
#include <stdlib.h>	// malloc, free 함수가 선언된 헤더 파일

int main() {
	int num1 = 10;	// 지역 변수는 Stack 영역에 생성. 함수가 끝나면 자동으로 메모리 해제
	int *numPtr1;

	numPtr1 = &num1;

	int *numPtr2;
	numPtr2 = malloc(sizeof(int));
	/*
	4바이트만큼 할당된 메모리 주소 반환
	성공하면 메모리 주소를 반환, 실패하면 NULL을 반환

	malloc 함수는 Heap 영역의 메모리 사용. 메모리 해제 필수
	*/

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2);

	return 0;
}