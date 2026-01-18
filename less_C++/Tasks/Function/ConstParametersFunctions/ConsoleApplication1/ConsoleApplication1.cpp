#include <iostream>

using namespace std;

// Константный параметры нужны для того, чтобы защитить параметры от случайного изменения внутри функции.

void fillArr(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = (i + 1) * 2;
	}
}

void showArr(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}

int main()
{
	int size = 10;
	int* arr = new int[size];

	fillArr(arr, size);
	showArr(arr, size);
}