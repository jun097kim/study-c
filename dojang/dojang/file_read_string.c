/* fread 함수로 읽기 크기와 읽기 횟수를 지정하여 문자열 읽기
   fgets와는 달리 \n이 있든 없든 무조건 지정된 크기만큼 읽음 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char buffer[20] = { 0, };

	FILE *fp = fopen("hello.txt", "r");

	//fread(buffer, sizeof(buffer), 1, fp);
	fread(buffer, sizeof(buffer) - 1, 1, stdin);	// 버퍼 끝에 NULL이 들어갈 수 있도록
													// 읽기 크기를 버퍼 크기보다 1 작게 지정한다.

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}