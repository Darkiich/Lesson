#include <iostream>

using namespace std;

void fillArray(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 20;
	}
}

void showArray(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}

// Копирование значений одного динамического массива в другой
int main()
{
	int size = 0;

	cout << "Enter the size of the array: ";
	cin >> size;

	cout << endl;

	int* arr1 = new int[size];
	int* arr2 = new int[size];

	cout << "Array 1: ";
	fillArray(arr1, size);
	showArray(arr1, size);

	cout << endl;

	cout << "Array 2: ";
	fillArray(arr2, size);
	showArray(arr2, size);

	cout << endl << "===============================" << endl;

	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}

	cout << "Array 1: ";
	showArray(arr1, size);

	cout << endl;

	cout << "Array 2: ";
	showArray(arr2, size);

	cout << endl;

	delete[] arr1;
	delete[] arr2;

}