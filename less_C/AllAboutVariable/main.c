#include <stdio.h>

void main()
{
	// Модификатор доступа signed и unsigned. Диапазон для signed - от минимума до максимума, а unsigned - диапазон от 0 до максимума

	// ============== Типы short, int, long, long long - по умолчанию знаковые ==============

	char cnumber = 5; // 1 байт
	char csign = 'A';
	signed char cnumber2 = 2; // 1 байт, от -128 до 127
	unsigned char cnumber3 = 2; // 1 байт, от 0 до 255
	printf("TYPE CHAR: \nnumber: %d \nsign: %c - sign ASCII: %d \nnumber 2: %d \nnumber 3: %d\n\n", cnumber, csign, csign, cnumber2, cnumber3);

	short snumber = 5; // от 32768 до 32767. Занимает в памяти 2 байта
	unsigned short sunsigned = 5; // от 0 до 65535. Занимает в памяти 2 байта.
	printf("TYPE SHORT: \nsnumber: %d \nsunsigned: %u \n\n", cnumber, sunsigned);

	int inumber = 5; // от −2 147 483 648 до 2 147 483 647. Занимает в памяти 4 байт и выше
	unsigned int uninumber = 5; // от 0 до 4 294 967. Занимает в памяти 4 байт и выше
	short int sinumber = 5; // от -32 768 до 32 767. Занимает в памяти 2 байт
	unsigned short int unsinumber = 5; // от 0 до 65 535. Занимает в памяти 2 байт
	printf("TYPE INT: \nint: %d \nunsigned int: %u \nshort int: %hd \nunsigned short int: %hu \n\n", inumber, uninumber, sinumber, unsinumber);

	long lnumber = 5; // от -2 147 483 648 до 2 147 483 647, 4 или 8 байт
	unsigned long ulnumber = 5; // от 0 до 4 294 967 295
	long long llnumber = 5; // от -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807, 8 байт
	unsigned long long ullnumber = 5; // от 0 до 18 446 744 073 709 551 615, 8 байт
	printf("TYPE LONG: \nlong: %ld \nunsigned long: %lu \nlong long: %lld \nunsigned long long: %llu \n\n", lnumber, ulnumber, llnumber, ullnumber);

	float fnumber = 3.14f; // 4 байта, точность ~6-7 знаков
	double dnumber = 3.1415926535; // 8 байт, точность ~15-16 знаков
	long double ldnumber = 3.14159265358979323846L; // 16 байт

	printf("TYPE FLOAT/DOUBLE:\n");
	printf("float: %f\n", fnumber);
	printf("float (scientific): %e\n", fnumber);
	printf("double: %.10f\n", dnumber); // вывод с 10 знаками после запятой
	printf("double (scientific): %e\n", dnumber);
	printf("long double: %.18Lf\n\n", ldnumber);

	// ============== Размеры типов ==============
	printf("SIZES OF TYPES (in bytes):\n");
	printf("char: %zu\n", sizeof(char));
	printf("short: %zu\n", sizeof(short));
	printf("int: %zu\n", sizeof(int));
	printf("long: %zu\n", sizeof(long));
	printf("long long: %zu\n", sizeof(long long));
	printf("float: %zu\n", sizeof(float));
	printf("double: %zu\n", sizeof(double));
	printf("long double: %zu\n\n", sizeof(long double));

	// Константные переменные
	const int num = 5;
	printf("num: %d", num);

	//num = 6; // Изменять нельзя, выдаст ошибку

	return 0;
}