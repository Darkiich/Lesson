#include <stdio.h>

#define SIZE 20

int main(void)
{
	int ar[SIZE] = {};
	int ar2[40] = {};

	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = i * 2;
		ar2[i] = i * 4;
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("Before: \nElement %d - %d, address %p\n", i + 1, ar[i], &(ar[i]));
	}

	// 1. Операция копирования
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		ar[i] = ar2[i];
	}

	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("After: \nElement %d - %d, address %p\n", i + 1, ar[i], &(ar[i]));
	}

	return 0;
}