#include <stdio.h>

int main(void)
{
	for (size_t i = 0; i <= 11; i++)
	{
		for (size_t j = 0; j <= 11; j++) 
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}