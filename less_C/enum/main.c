#include <stdio.h>

int main(void)
{
	enum SomeEnum {
		START,
		PAUSE,
		FINISH
	};

	enum SomeEnum state = START;

	typedef enum {
		FISH,
		APPLE,
		WATERMELON
	} SomeEnum2;

	SomeEnum2 state2 = APPLE;

	typedef enum {
		MONDAY,
		TUESDAY,
		FRIDAY = 99,
		SATUDAY
	} SomeEnum3;

	SomeEnum3 state3 = SATUDAY;

	printf("%d\n", state); // Выведет 0, так как все элементы enum идут с 0 вверх, если не укзано другое значение
	printf("%d\n", state2); // Выведет 1, так как второй элемент с идексом 1
	printf("%d", state3); // Выведет 100, так как третий элемент явно указан откуда начинать

	return 0;
}