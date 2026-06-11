#include <stdio.h>

// union - объединения, это тип данных, который выделяет память на основе самого большого значения в нём и при изменении поля перезаписывает значение union перезаписывая те же байты новым значением

static char* d = "Hello";

union MyUnion {
	int i;
	double b;
	char c[20];
};

int main(void)
{
	union MyUnion myUni;

	myUni.i = 5;
	printf("int: %d, double: %f, char: %s\n", myUni.i, myUni.b, myUni.c);

	myUni.b = 5.0;
	printf("int: %d, double: %f, char: %s\n", myUni.i, myUni.b, myUni.c);

	size_t size = sizeof(myUni.c) / sizeof(myUni.c[0]);
	for (int i = 0; i < size; i++)
	{
		myUni.c[i] = d[i];
	}
	myUni.c[size - 1] = '\0';
	printf("int: %d, double: %f, char: %s", myUni.i, myUni.b, myUni.c);
	return 0;
}