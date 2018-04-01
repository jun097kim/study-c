#include <stdio.h>

#define printf
#define fprintf

#define ANDROID
#define MOBILE

#include "platform.h"

int main()
{
	printf("OS: Android\n");

	return 0;
}