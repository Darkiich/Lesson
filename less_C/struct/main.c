#include <stdio.h>
#include <math.h>

struct MyStruct
{
	int x;
	int y;
	int z;
};

typedef enum {
	name_length = 20,
	last_name_length = 20
} FIOInfo;

struct UserSurename
{
	char name[name_length];
	char last_name[last_name_length];
};

struct Person
{
	struct UserSurename fio; // Вложенная структура
	char sex;
	unsigned short age;
};

int main(void)
{
	struct MyStruct ms = {}; // Инициализирует поля обычными нулями
	printf("%d, %d, %d\n\n", ms.x, ms.y, ms.z);

	struct Person person = { {"Kto", "Nikto"}, 'M', 20};
	printf("Name: %s, last_name: %s, sex: '%c', age: %d\n\n", person.fio.name, person.fio.last_name, person.sex, person.age);

	struct Person p = person; // Структуры можно копировать друг в друга
	printf("Name: %s, last_name: %s, sex: '%c', age: %d", p.fio.name, p.fio.last_name, p.sex, p.age);

	// ====================== Массив из структур данных ======================
	struct MyStruct ms2[name_length];

	return 0;
}