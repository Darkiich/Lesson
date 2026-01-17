#include <iostream>

using namespace std;

// new - просит выделить память из оперативки. delete - освобождает память, выделенную с помощью new.

int main()
{
	int* a = new int; // выделение памяти под целое число
	*a = 10;
	cout << *a << endl;
	delete a; // освобождение памяти
}