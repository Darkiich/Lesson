#include <stdio.h>

int main(void)
{
	int number, number2;
	int resSum;

	printf("Input number: ");
	int res = scanf("%d", &number);

	printf("Input number2: ");
	int res2 = scanf("%d", &number2);

	if (res)
	{
		printf("Success! Number1: %d, Number2: %d, Result input = %d \n", number, number2, res);

		resSum = number + number2;
		printf("\nResult sum: %d", resSum);
	}
	else
	{
		printf("Not success! Result input = %d", res);

	}

	return 0;
}