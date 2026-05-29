#include <stdio.h>

int main(void)
{
	char option; // Можно и int вместо char
	int num1, num2;

	int res;

	printf("First number: ");
	scanf("%d", &num1);

	printf("Second number: ");
	scanf("%d", &num2);

	printf("\nSelect number between 1 and 4\n1. Sum\n2. Minus\n3. Divide\n4. Multiply\n\n");
	printf("You're option: ");
	scanf("%d", &option);

	switch (option)
	{
		case 1:
			res = num1 + num2;
			break;
		case 2:
			res = num1 - num2;
			break;
		case 3:
			if (num2 == 0)
			{
				printf("Divide by zero don't apply\n");
				res = 0;
				break;
			}

			res = num1 / num2;
			break;
		case 4:
			res = num1 * num2;
			break;
		default:
			printf("This select don't exist\n");
			res = 0;
	}

	printf("Result: %d", res);

	return 0;
}