#include <iostream>

using namespace std;

// Преобразование типов в стиле C
int main()
{
	double pi = 3.14159;

	// Явное преобразование типов
	cout << (int)pi << endl; // Вывод: 3
	cout << (bool)pi << endl; // Вывод: 1 (true). Если число не равно нулю, то результат true
	cout << (char)pi << endl; // Вывод: символ ASCII
}