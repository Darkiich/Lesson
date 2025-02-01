#include <iostream>

using namespace std;

int main()
{
	// Одномерные массивы

	/* Создание и инициализация массива.
	   p.s - нельзя создать пустой массив не указав кол-во элементов
	*/
	int massiv[4]{};
	cout << massiv[3] << endl;

	/* Если кол-во указанных элементов будет превышать, то они заполнятся '0' */
	int arr[10]{ 1, 2, 3, 4 };
	cout << arr[6] << endl;

	/* Вывод и заполенение массива через цикл */
	const int size = 5;

	int arra[size]{ 1, 2, 3, 4, 5 };
	int arra_1[size]{};

	// Вывод массива
	cout << "Array 1: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arra[i] << endl;
	}

	//Заполнение массива итератором цикла
	cout << "Array 2: " << endl;
	for (int i = 0; i < size; i++)
	{
		arra_1[i] = i;
		cout << arra_1[i] << endl;
	}
}