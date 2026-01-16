#include <iostream>

using namespace std;

// Арифметика указателей

void fillArray(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
	srand(time(0));

	const int sizeArr = 10;
	int arr[sizeArr]{}; // Массив - это уже указатель на первый элемент

	fillArray(arr, sizeArr);
	printArray(arr, sizeArr);

	return 0;
}

void fillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " "; // Арифметика указателей. Разыменование указателя на первый элемент(массив) + итератор цикла.
		// Есть опасноть в том, что мы можем выйти за границы массива и обратиться к какому-то адрессу в памяти.
	}
}