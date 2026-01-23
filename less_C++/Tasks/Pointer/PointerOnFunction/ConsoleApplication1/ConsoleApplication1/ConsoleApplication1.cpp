#include <iostream>

using namespace std;

int Sum(int a)
{
	return a + a;
}

int Minus(int a)
{
	return a - a;
}

int Coordinates(string action, int x, int y)
{
	if (action == "+")
		return x + y;
	else if (action == "-")
		return x - y;
	else if (action == "*")
		return x * y;
	else if (action == "/")
		return x / y;
	else
	{
		cout << "Dont't select any action" << endl;
		return 0;
	}
}

void ShowResult(int value, int (*funcPtr)(int))
{
	cout << "Show from Result: " << funcPtr(value) << endl;
}

void ShowResult(string action, int x, int y, int (*funcPtr)(string, int, int))
{
	cout << "Show from Result: " << funcPtr(action, x, y) << endl;
}

int main()
{
	// Указатель на функцию. Этот пример нужен только для показа синтаксиса и работы указателя на функцию, ибо так никто не будет делать.
	int (*funcPtr)(int a);
	funcPtr = Sum;
	cout << "Sum: " << funcPtr(5) << endl;

	funcPtr = Minus;
	cout << "Minus: " << funcPtr(5);

	cout << "first" << endl;
	ShowResult(4, Sum);
	cout << endl;

	string action;
	int x, y;

	cout << "Do u want action: ";
	cin >> action;

	cout << "Do u want x coordinate: ";
	cin >> x;

	cout << "Do u want y coordinate: ";
	cin >> y;

	int (*func)(string, int, int); // Создаём указатель на функцию, который будет принимать три параметра - строка, число, число
	func = Coordinates; // Записываем в указатель функцию, которая будет вызываться
	cout << "Invoke in main(): " << func(action, x, y) << endl; // Через указатель вызываем функцию и передаём записанные параметры

	ShowResult(action, x, y, Coordinates);
}