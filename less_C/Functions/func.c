#include <stdio.h>
#include "HeaderFunc/protoFunc.h"

int Sum(int a, int b)
{
	b++; // Изменение значения тут ничего не изменит вне функции, так как это не ссылочный тип
	return a + b;
}

int main(void)
{
	int a = 10, b = 15;
	printf("Before use func sum: a: %d, b: %d, sum = %d\n", a, b, a + b);
	printf("After use func sum: a: %d, b: %d, sum = %d\n\n", a, b, Sum(a, b));

	printf("Before use func minus: a: %d, b: %d, sum = %d\n", a, b, b - a);
	printf("After use func minus: a: %d, b: %d, sum = %d", a, b, minus(a, b)); // minus определена в protoFunc.h и реализована в protoFunc.c/ Обычно так и делают всегда, определение в одном, реализация в другом
}