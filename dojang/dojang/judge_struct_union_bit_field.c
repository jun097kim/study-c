#include <stdio.h>

struct Flags {
	union {
		struct {
			unsigned short a : 3;
			unsigned short b : 4;
			unsigned short c : 7;
			unsigned short d : 2;
		};
		unsigned short e;
	};
};

int main()
{
	struct Flags f1 = { 0, };

	f1.a = 4;	// 0000 0100
	f1.b = 8;	// 0000 1000
	f1.c = 64;	// 0100 0000
	f1.d = 3;	// 0000 0011

	printf("%u\n", f1.e);	// 57412 = 11 1000000 1000 100

	return 0;
}