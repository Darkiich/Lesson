#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool trueFalse, trueFalse2, trueFalse3, trueFalse4;
	int a = 5, b = 6;

	int num1 = 5, num2 = 5;
	int num3 = 5, num4 = 6;

	trueFalse = a < b;
	trueFalse2 = a > b;
	trueFalse3 = num1 == num2;
	trueFalse4 = num3 == num4;
	printf("a(%d) < b(%d) = %d \na(%d) > b(%d) = %d \nnum1(%d) == num2(%d) = %d \nnum1(%d) == num2(%d) = %d", a, b, trueFalse, a, b, trueFalse2, num1, num2, trueFalse3, num3, num4, trueFalse4);

	return 0;
}