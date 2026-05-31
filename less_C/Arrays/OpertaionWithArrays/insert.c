#include <stdio.h>

#define SIZE 20

int main(void)
{
	int ar[SIZE] = {1, 2, 3 , 4, 5, [19] = 2020};
	int indx, number;

	printf("Before: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Element %d - %d, address %p\n", i + 1, ar[i], &(ar[i]));
	}

	printf("\nEnter index: ");
	scanf("%d", &indx);

	printf("\nEnter number: ");
	scanf("%d", &number);

	// 2. Вставка элемента
	for (int i = SIZE - 1; i > indx; i--) // Итерируемся по индексам и поэтому int i = SIZE - 1
	{
		ar[i] = ar[i - 1]; // Смещаем все элементы на один вправо, но из-за этого [19] = 2020 изменится на предыдущий элемент
	}
	
	ar[indx] = number; // Вставляем значение по указанному индексу

	printf("After: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Element %d - %d, address %p\n", i + 1, ar[i], &(ar[i]));
	}

	return 0;
}