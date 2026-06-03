#include <stdio.h>

int Sum(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int Multiply(int a, int b)
{
	return a * b;
}

int Devide(int a, int b)
{
	if (b == 0) return 0;
	return a / b;
}

int main(void)
{
	int a, b, option;
	int (*ptr_func) (int, int) = NULL; // Указатель на функцию, инициализирован пустым значемнием

	printf("Enter first number: ");
	if (scanf("%d", &a) != 1) return 1;

	printf("Enter second number: ");
	if (scanf("%d", &b) != 1) return 1;

	printf("Enter option\n1. Sum\n2. Minus\n3. Multiply\n4. Divide: ");
	if (scanf("%d", &option) != 1) return 1;

	//int (*chooseFunc[])(int, int) = {Sum, Minus, Multiply, Devide}; // Можно использовать массив с указателями

	switch (option) // Или же через свитч-кейс
	{
		case 1:
			ptr_func = Sum;
			break;
		case 2:
			ptr_func = Minus;
			break;
		case 3:
			ptr_func = Multiply;
			break;
		case 4:
			ptr_func = Devide;
			break;
		default:
			printf("Do not choose option\n");
			return 1;
	}

	//printf("Sum a: %d, b: %d, Option(%d): %d\n", a, b, option, chooseFunc[option - 1](a, b)); // Можно через массив pointersrsrsrsrsrs

	if (ptr_func != NULL)
	{
		printf("Sum a: %d, b: %d, Option(%d): %d\n", a, b, option, ptr_func(a, b));
	}
}