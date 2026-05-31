#include <stdio.h>

int main(void)
{
	int ar[] = { 1, 2, 3, 4, 5 };
	const int* p_ar; // такая запись cosnt у указателей позовляет изменить адрес указателя, но не позваоляет изменить значение по 

	p_ar = ar; // Можно
	int a = p_ar[4]; // Можно
	//p_ar[4] = 10; // Нельзя

	printf("Before: \nPointer on the array: %p, element: %d\n\n", p_ar, *p_ar);

	p_ar++; // Можно

	printf("After: \nPointer on the array: %p, element: %d", p_ar, *p_ar);

	int* const p_ar2 = ar; // Такая запись const у указателкй не позволяет ничего делать с ним, только инициализировать
	//p_ar2 = p_ar; // Нельзя
	// p_ar2++; // Нельзя

	return 0;
}