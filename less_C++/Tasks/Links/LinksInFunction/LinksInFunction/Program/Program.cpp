#include <iostream>

using namespace std;

// Передача параметров в функцию по ссылке

template <typename T>
void swapNumber(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

	cout << endl;
	cout << "После:\n" << a << "\n" << b << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int la = 0;
	int lb = 0;
	
	cout << "Введите числа:\n";
	cin >> la;
	cin >> lb;

	cout << endl;

	cout << "До:\n" << la << "\n" << lb << endl;

	swapNumber(la, lb);
}