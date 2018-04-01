#include <stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#include "debug.h"

int main()
{
#if defined DEBUG && defined ENABLE_DEBUG_MESSAGE
	printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

	return 0;
}