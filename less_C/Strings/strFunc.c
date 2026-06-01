#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "Hello, World";
	char s[10];

	char sh[100] = "Hello";
	char sh2[10] = ", World";

	size_t size = sizeof(s) - 1; // sizeof(s) - 1, потому что мы должны в конце записать \0

	// ===================== Копирование строки в другую строку =====================
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
	strcat(sh, sh2);
	puts(sh);

	strncat(sh2, sh, sizeof(sh) - strlen(sh) - 1);
	//sh2[sizeof(sh2 - 1)] = '\0';
	puts(sh2);

	return 0;
}