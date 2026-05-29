#include <stdio.h>


int main(void)
{
	// sizeof - оператор, который вернёт размер в байтах указанного операнда
	// sizeof - также возвращает размер в виде значения size_t
	// size_t - представляет псевдоним для unsigned int. На других системах может быть другим

	size_t char_size_t = sizeof(char);
	size_t float_size_t = sizeof(float);
	size_t long_size_t = sizeof(long);
	size_t short_size_t = sizeof(short);
	printf("SIZE_T TYPE VARIABLE: \nsize_t char_size_t = %d\nsize_t float_size_t = %d\nsize_t long_size_t = %d\nsize_t short_size_t = %d\n\n", char_size_t, float_size_t, long_size_t, short_size_t);
}