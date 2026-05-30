#include <stdio.h>

#define SIZEARRAY 5

int main(void)
{
	// int n = 5;
	// int arr[n]; Так лучше не объявлять массив

	int array[SIZEARRAY]; // Массив с указанным количеством элементов
	int arr[] = {1, 2, 3, 4, 5}; // Массив не с указанным количеством элементов

	size_t sizeArr = sizeof(int);

	for (int i = 0; i < SIZEARRAY; i++)
	{
		array[i] = i * 2;
	}
	
	printf("Array with exist size\n");
	for (int i = 0; i < SIZEARRAY; i++)
	{
		printf("Element %d - %d\n", i + 1, array[i]);
	}

	sizeArr = sizeof(arr) / sizeof(arr[0]); // Считаем по общему количеству байт / размер байт первого элемента
	// szieof - считает во время компиляции, а не во время выполнения программы, так что если пытаться посчитать массив, который пустой, но заполняется в коде, то sizeof вернёт просто 0

	printf("\nArray with not exist size\n");
	for (int i = 0; i < sizeArr; i++)
	{
		printf("Element %d - %d\n", i + 1, arr[i]);
	}

	return 0;
}