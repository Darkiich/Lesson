#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fill_array(int* ar, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		ar[i] = i * 2;
	}
}

void show_array(int* ar, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		printf("%d, ", ar[i]);
	}
}



int main(void)
{
	int size;

	printf("Enter size of array: ");
	scanf("%d", &size);

	int *array = (int*) malloc(size * sizeof(int)); // Выделяем память
	if (array == NULL)
		return 1;
	fill_array(array, &size);
	show_array(array, &size);

	puts("\nSecond array");

	int* array2 = (int*) calloc(size, sizeof(int)); // Делает то же самое, что и malloc, но заполняет при этом всё нулями
	show_array(array2, &size);
	
	int size2 = 10;
	int* array3 = (int*)realloc(array, size2 * sizeof(int)); // Перевыделяем память для массива
	if (array3 != NULL)
	{
		array = array3;
		puts("\nFinish array");
		show_array(array3, &size2);
	}

	free(array2); // Очищаем память
	free(array);

	return 0;
}