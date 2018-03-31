#include <stdio.h>

struct Flags {
	union {
		struct {
			unsigned short a : 4;
			unsigned short b : 2;
			unsigned short c : 2;
			unsigned short d : 8;
		};
		unsigned short e;
	};
};
int main()
{
	struct Flags f1 = { 0, };

	f1.a = 8;	// 0000 1000
	f1.b = 2;	// 0000 0010
	f1.c = 2;	// 0000 0010
	f1.d = 128;	// 1000 0000

	printf("%u\n", f1.e);	// 32936 = 10000000 10 10 1000

	return 0;
}