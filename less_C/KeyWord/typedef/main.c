#include <stdio.h.>

int main(void)
{
	// typedef - оператор, который позволяет определить псевдоним для типов переменных. Требуется для того, например чтобы сократить длинный тип данных переменной
	typedef unsigned long long ULL;
	typedef unsigned char BYTE;

	printf("CUSTOM TYPE:\n");
	ULL ull = 1235489345758;
	BYTE byte = 255;

	printf("ULL ull = %llu \nBYTE byte = %d", ull, byte);
}