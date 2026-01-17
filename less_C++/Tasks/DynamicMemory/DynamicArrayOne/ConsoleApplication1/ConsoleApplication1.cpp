#include <iostream>

using namespace std;

// Динамический массив

int main()
{
	srand(time(0));

	int size;

	cout << "Enter size: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() & 10;
	}

	for (int i = 0; i < size; i++) // Если выйти за пределы этого массива, то там будет адресс памяти из оперативки
	{
		cout << *(arr + i) << " ";

		if ((i + 1) % 4 == 0)
		{
			cout << endl;
		}
	}

	delete[] arr; // Удаляем массив из выделенной памяти оперативки
}