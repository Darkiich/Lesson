#include <stdio.h>
#include <string.h>

extern int array[100]; // Помечает как глобальную переменную
extern int aga;
extern char str[20];

int SumArr(int*, int); // Тут не обязательно указывать extern, так как функция неявно его добавляет

int main(void)
{
	int size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < size; i++)
	{
		array[i] = i * 2;
	}

	array[size - 1] = aga;

	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n\n");

	puts(str);

	int sum = SumArr(array, size);
	printf("\nSum array: %d", sum);

	return 0;
}

// Педставим, что инфа ниже - это другой файл

int array[100];
int aga = 1098;
char str[20] = "Hello";

int SumArr(int* ar, int size)
{
	int res;
	for (int i = 0; i < size; i++)
	{
		res += ar[i];
	}

	return res;
}