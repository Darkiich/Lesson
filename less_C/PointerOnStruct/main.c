#include <stdio.h>
#include <stdlib.h>

// Операция -> заменяет разыменовывание

struct Point
{
	int x, y;
	char someSign;
};

struct DataForArifmeticOperations
{
	int a, b, sum;
};

struct DataForArifmeticOperations arifmOperation(const struct DataForArifmeticOperations* data, const unsigned char oper) // Указатели быстрее, чем копия, поэтому написал чперез указатель
{
	struct DataForArifmeticOperations res = {data->a, data->b, 0};

	switch (oper)
	{
	case 1: res.sum = data->a + data->b; break;
	case 2: res.sum = data->a - data->b; break;
	case 3: res.sum = data->a * data->b; break;
	case 4:
		res.sum = data->b == 0 ?
		0
		:
		data->a / data->b;

		break;
	default:
		break;
	}

	return res;
}

int main(void)
{
	struct Point point = {65, 5};
	struct Point* ptr_point = &point; // ссылка на указатель

	ptr_point->someSign = (char)ptr_point->x; // записываем приводя к ascii-символу
	//(*ptr_point).someSign = (char)(*ptr_point).x; // записываем приводя к ascii-символу другим способом

	printf("x: %d, y: %d \nchar(ascii): %d, %c\n\n", ptr_point->x, ptr_point->y, ptr_point->someSign, ptr_point->someSign);

	// ========================= Можно создавать динамические структуры =========================
	struct Point* point2 = malloc(sizeof(struct Point));
	if (!point2) return 1;
	point2->x = 68;
	point2->y = 90;
	point2->someSign = (char)point2->x;
	
	printf("x: %d, y: %d \nchar(ascii): %d, %c\n\n", point2->x, point2->y, point2->x, point2->someSign);

	// ========================= Передача структур в функции =========================
	struct DataForArifmeticOperations a1 = {5, 7};
	struct DataForArifmeticOperations result = arifmOperation(&a1, 1);

	printf("Sum: %d", result.sum);

	free(point2);

	return 0;
}