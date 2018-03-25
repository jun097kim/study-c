/* offsetof 매크로: 구조체와 멤버를 지정하면 해당 멤버의 상대 위치를 반환 */
#include <stdio.h>
#include <stddef.h>

struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	printf("%d\n", offsetof(struct PacketHeader, flags));	// 첫 멤버의 상대 위치는 0
	printf("%d\n", offsetof(struct PacketHeader, seq));	// 4 = char flags 1바이트 + 패딩 3바이트

	return 0;
}