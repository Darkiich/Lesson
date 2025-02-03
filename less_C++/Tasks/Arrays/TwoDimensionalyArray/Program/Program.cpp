#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	/* Объявление и инициализация массива */
	const int ROW = 3;
	const int COL = 4;

	int arr[ROW][COL]{
		{1, 2, 3, 4},
		{1, 2, 3, 4},
		{1, 2, 3, 4},
	};

	cout << "Элемент 1 массива: " << arr[2][3] << endl;

	// В двумерном массиве можно оставить кол-во строк пустым, но кол-во колонок обязательно
	int a[][COL]
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},
		{17, 18, 19, 20},
		{21, 22, 23, 24}
	};

	cout << "Элемент 2 массива: " << a[4][3] << endl;

	int ar[ROW][COL]
	{
		{}
	};

	// Заполнение массива
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			ar[i][j] = j;
		}
	}

	// Вывод массива
	for (int i = 0; i < ROW; i++)
	{
		cout << "Строка " << i << ": ";

		for (int j = 0; j < COL; j++)
		{
			cout << ar[i][j];
		}
		cout << endl;
	}
}