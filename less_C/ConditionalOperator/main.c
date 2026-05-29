#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool isRange, onDoSomeAction;
	int startPoint = 4, endPoint = 10;

	int middleNumber;
	printf("Input number: ");
	scanf("%d", &middleNumber);

	if (middleNumber > startPoint && middleNumber < endPoint)
	{
		isRange = true;
		printf("The number %d is in middle between %d and %d\n", middleNumber, startPoint, endPoint);
	}
	else
	{
		printf("The number %d is not in middle between %d and %d\n", middleNumber, startPoint, endPoint);
	}

	onDoSomeAction = isRange ? printf("Doing something") : printf("Not do something action"); // Тернарный оператор
}