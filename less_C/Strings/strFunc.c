#include <stdio.h>
#include <string.h>

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

	return 0;
}