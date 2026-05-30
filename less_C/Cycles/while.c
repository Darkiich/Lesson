#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // надо для rand() и srand()
#include <time.h> // надо для time()

int main(void)
{
	srand(time(NULL)); // надо, чтобы не было одинаковых чисел

	int number, i = 0;
	int rand_num = rand() % 100; // рандомное число до 100

	while (true)
	{
		printf("Enter number: ");
		if (scanf("%d", &number) == 0)
		{ 
			printf("Input object isn't a number");
			break;
		}

		if (number < rand_num)
		{
			i++;
			printf("Come up\n\n");
		}
		else if (number > rand_num)
		{
			i++;
			printf("Come below\n\n");
		}
		else
		{
			printf("You are guessed the number - %d for %d attempt", rand_num, i);
		}
	}

	return 0;
}