#include <stdio.h>

#ifndef DEBUG
#define DEBUG 1
#endif

int main(void)
{
	int on;

	#if DEBUG == 1

	on = DEBUG;

	#elif DEBUG == 2

	on = DEBUG;

	#endif

	if (on && on != 0 && on < 2)
	{
		printf("Debug mode come start");
	}
	else
	{
		printf("Debug mode come start with more information");
	}

	return 0;
}