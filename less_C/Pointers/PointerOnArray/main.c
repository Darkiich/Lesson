#include <stdio.h>

int main(void)
{
	const int SIZE = 10;
	int ar[SIZE] = {};

	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = i * 2;
	}

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		//printf("Element %d - %d, address: %p\n", i + 1, ar[i], &(ar[i])); // Обычный способ через ar[i]
		printf("Element %d - %d, address: %p\n", i + 1, *(ar + i), &(ar[i])); // Способ через арифметику указателей *(ar + i)
	}


	int* p_ar = ar; // Указатель на массив, а конкретно на первый элемент
	int p_ar2 = *(ar + 4); // С помощью арифметики указателей получаем 5 элемент массива
	int* p_ar3 = ar + 4; // и его адрес
	*(ar + 4) = 10; // Меняем значение элемента через арифметику

	size_t s = sizeof(ar); // Вернёт занчение в байтах всего массива
	size_t s2 = sizeof(p_ar); // Вернёт значение в байтах не первого элемента, а размера самого указателя

	printf("\nPointer first element array: %p \nHim value: %d \nValue after arifmetic pointer: %d \nAddress this pointer value: %p \n\nsizeof(ar): %zu \nsizeof(p_ar): %zu\n", p_ar, *p_ar, p_ar2, p_ar3, s, s2);

	int a = p_ar[5]; // Получаем элемент массива через указатель
	printf("Element value: %d, address: %p", a, &p_ar[5]);

	return 0;
}