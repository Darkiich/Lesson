#include <stdio.h>

#define PI 3.14

#define MULTIPLY_FUNC(x, y) "Multiply: %d\n", (x * y)
#define SUM(x, y) "Square ( " #x " )" " x " "( " #y " )\n" // Оператор '#' выводит название параметра
#define SUM_FUNC(X) x ## X // Оператор конкатенации, то есть будет x1

int main(void)
{
	float r, C;
	int x1 = 5, y1 = 5;

	printf("Size radius: ");
	scanf("%f", &r);

	C = 2 * PI * r; // Длина окружности
	printf("Size okrushnosti: %f\n", C);

	#undef PI // Обнуляет макрос, необязательно использовать

	printf(SUM(x1, y1));
	printf(MULTIPLY_FUNC(x1, y1));
	printf("%d", SUM_FUNC(1)); // Будет выведено 5, так как оно вернёт x1, а x1 - это переменная

	return 0;
}