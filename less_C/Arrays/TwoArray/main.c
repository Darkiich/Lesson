#include <stdio.h>

#define ROW 5
#define COL 11

#define ROW_FOR_TABLE_OF_MULTIPLY 11
#define COL_FOR_TABLE_OF_MULTIPLY 11

int main(void)
{
	int array[ROW][COL];
	int ar[ROW_FOR_TABLE_OF_MULTIPLY][COL_FOR_TABLE_OF_MULTIPLY];

	int (*ptr_ar)[COL_FOR_TABLE_OF_MULTIPLY] = ar; // Указатель на двумерный массив, где (*ptr_ar) - это ссылка на первый(внешний) массив, а [COL_FOR_TABLE_OF_MULTIPLY] показ из скольки элементов состоит второй(внутренний) массив

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			array[i][j] = i * 2;
		}
	}

	printf("Two different:\n");
	for (int i = 0; i < ROW; i++)
	{
		printf("ROW: %d\n", i + 1);
		for (int j = 0; j < COL; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < ROW_FOR_TABLE_OF_MULTIPLY; i++)
	{
		for (int j = 0; j < COL_FOR_TABLE_OF_MULTIPLY; j++)
		{
			ar[i][j] = i * j;
		}
	}
	printf("\nElement: %d, address %p\n", ptr_ar[0][0], ptr_ar); // Выводим элемент массива через указатель

	printf("\nTable of multiply:\n");
	for (int i = 0; i < ROW_FOR_TABLE_OF_MULTIPLY; i++)
	{
		for (int j = 0; j < COL_FOR_TABLE_OF_MULTIPLY; j++)
		{
			printf("%d * %d = %d\n", i, j, ar[i][j]);
		}
		printf("\n");
	}

	return 0;
}