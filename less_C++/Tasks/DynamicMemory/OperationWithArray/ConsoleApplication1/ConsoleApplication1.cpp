#include <iostream>

using namespace std;

void FillArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() & 10;
	}
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Добавление элемента в конец динамического массива
void push_back(int*& arr, int& size, int value) // Передаем указатель по ссылке(*&), чтобы можно было изменить адрес для этого указателя. Если не передавать по ссылке, то не получится изменить адрес.
{
	int* newArr = new int[size + 1]; // Создаем новый массив на 1 элемент больше
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = value; // Добавляем новый элемент в конец
	size++; // Увеличиваем переменную размера массива по ссылке в main()
	delete[] arr; // Удаляем старый массив
	arr = newArr; // Как раз тут и изменяем адрес указателя arr на новый массив из-за передачи указателя по ссылке(*&)
}

// Удаление последнего элемента из динамического массива
void pop_back(int*& arr, int& size)
{
	int* newArr = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		newArr[i] = arr[i];
	}
	size--;
	delete[] arr;
	arr = newArr;
}

int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;

	int* arr = new int[size];

	FillArray(arr, size);
	PrintArray(arr, size);

	push_back(arr, size, 42);
	PrintArray(arr, size);

	pop_back(arr, size);
	PrintArray(arr, size);

	delete[] arr;
}