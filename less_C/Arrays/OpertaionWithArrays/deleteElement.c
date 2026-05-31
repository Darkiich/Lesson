#include <stdio.h>

#define SIZE 20

int main(void)
{
	int ar[SIZE] = { 1, 2, 3 , 4, 5,[19] = 2020 };
	int indx, number;

	printf("Before: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Element %d - %d, address %p\n", i + 1, ar[i], &(ar[i]));
	}

	printf("\nEnter index: ");
	scanf("%d", &indx);

	// 3. Удаление элемента
	for (int i = indx; i < SIZE - 1; i++) // Итерируемся по индексам и поэтому int i = indx(от удаляемого индекса элемента); i < SIZE - 1(до конца массива)
	{
		ar[i] = ar[i + 1]; // Смещаем все элементы на один влево, но [19] = 2020 никуда не убирается
	}

	printf("After: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Element %d - %d, address %p\n", i + 1, ar[i], &(ar[i]));
	}

	return 0;
}