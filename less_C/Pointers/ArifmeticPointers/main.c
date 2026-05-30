#include <stdio.h>

int main(void)
{
	int a = 10;
	int* pa = &a;

	printf("Before:\nValue: %d, address: %p\n\n", *pa, pa);

	*pa += 5;
	printf("After: *pa += 5\nValue: %d, address: %p\n\n", *pa, pa);
	
	pa++; // Сдвигаем на 4 байта вперёд, где что-то может лежать или просто мусорное значение. Лучше потом не пытаться изменять значения
	printf("After: pa++\nValue: %d, address: %p\n\n", *pa, pa);

	pa--; // Возвращаемся обратно на прошлый адрес
	printf("After: pa--\nValue: %d, address: %p", *pa, pa);

	return 0;
}