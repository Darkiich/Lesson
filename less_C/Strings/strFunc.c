#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	// ===================== Копирование строки в другую строку =====================
	
	char str[20] = "Hello, World";
	char s[10];

	size_t size = sizeof(s) - 1; // sizeof(s) - 1, потому что мы должны в конце записать \0

	//puts("strcpy: ");
	//strcpy(s, str); // Копирует элементы не проверяя их количество. Может отработать, но может стать потенциальной проблемой для программы
	//puts(s);

	//printf("\n");

	puts("strncpy: ");
	strncpy(s, str, size); // Копирует элементы проверяя их количество
	s[size] = '\0';
	puts(s);

	// ===================== Измерение длины данной строки =====================
	size_t rangeStr = strlen(s); // Длина строки(\0 не включается)
	printf("Count: %zu\n\n", rangeStr);

	// ===================== Объединение строк =====================
	char sh[100] = "Hello";
	char sh2[10] = ", World";

	strcat(sh, sh2);
	puts(sh);

	size_t n = sizeof(sh2) - strlen(sh2) - 1;
	strncat(sh2, sh, n);
	sh2[sizeof(sh2) - 1] = '\0';
	puts(sh2);

	// ===================== Построение строки =====================
	char aga[100];
	char dearS[] = "C programmer";
	char workerS[] = "Jhon Marston";
	char format[] = "Hello, dear %s. I'm a good worker %s";

	sprintf(aga, format, dearS, workerS); // Собираем строку из абсолюно любых переданных данных(строки, числа и.т.д)
	puts(aga);

	sprintf(aga, format, "dearS", "workerS"); // Или так
	puts(aga);

	// ===================== Преобразование строковых чисел в тип чисел =====================
	int i = atoi("12345");
	double d = atof("3.145986");
	long l = atol("-453834750");
	long long ll = atoll("345899450049435");
	sprintf(aga, "int: %d\ndouble: %f\nlong: %ld\nlong long: %lld", i, d, l ,ll);
	puts(aga);

	return 0;
}