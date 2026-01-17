#include <iostream>

using namespace std;

void func(int* p)
{
	(*p)++; // Сначала обязательно разыменовываем указатель заключив в скобки(т.к высший приоритет), а затем делаем остальные действия, которые хотим
}

int main()
{
	int a = 5;
	cout << "Before: " << a << endl;
	func(&a);
	cout << "After: " << a << endl;
}