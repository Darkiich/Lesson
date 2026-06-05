#include <stdio.h>

// static - ключевое слово, которое позволяет сохранять объекты в памяти и не создавать каждый раз новые, а так же может ограничивать область видимости

static int global_variable = 100; // Не видно вдругих файлах
static void someFunc() {} // Не видно вдругих файлах

int countCall()
{
	static int count = 0; // Будет записано в памяти и будет использоваться при кадом вызове это значение с этим адресом без создания заново, но нельзя будет работать с этой переменной. Хранится в .bss секторе

	return ++count;
}

int main(void)
{
    printf("Count: %d\n", countCall());
    printf("Count: %d\n", countCall());
    printf("Count: %d\n", countCall());
    printf("Count: %d\n", countCall());
    printf("Count: %d\n", countCall());
}