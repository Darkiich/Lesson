#include <iostream>

using namespace std;

// Передача указателей в функцию

void swapNumber(int *pa, int *pb)
{
	int* temp = pb;
	pb = pa;
	pa = temp;
	
	cout << endl;

	cout << "После:\n" << *pa << " - (" << pa << ")\n" << *pb << " - (" << pb << ")" << endl;

}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\t\t\t============== Замена чисел ==============" << endl;

	int a = 10;
	int b = 5;

	cout << "До:\n" << a << " - (" << &a << ")" << "\n" << b << " - (" << &b << ")" << endl;

	swapNumber(&a, &b);
}