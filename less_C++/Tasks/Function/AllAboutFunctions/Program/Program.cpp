#include <iostream>

using namespace std;

// Создание функции
void MyFunc()
{

}

// Передача аргументов в функцию
int Sum(int a, int b)
{
	return a + b;
}

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], int size)
{
	cout << "Вывод массива:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	// Передача аргументов в функцию
	int res = Sum(5, 4);
	cout << res << endl;

	// Передача массива в функцию(эта передача является ссылочным типом, а не значимым)
	const int a = 10;
	int ar[a]{};

	FillArray(ar, a);
	PrintArray(ar, a);
}