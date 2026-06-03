#include <stdio.h>

void fillArray(int* ar, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%d", &ar[i]);
	}
}

void showArray(int* ar, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", ar[i]);
	}
}

void swap(int* a, int* b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

int main(void)
{
	// Меняем местами значения переменных
	int a = 10, b = 5;
	printf("Before: a: %d, b: %d\n", a, b);
	int* ptr = &a, *ptr2 = &b;
	swap(ptr, ptr2);
	printf("After: a: %d, b: %d\n\n", a, b);

	// Заполняем массив
	int ar[10];
	size_t size = sizeof(ar) / sizeof(ar[0]);

	fillArray(ar, size);
	showArray(ar, size);
}