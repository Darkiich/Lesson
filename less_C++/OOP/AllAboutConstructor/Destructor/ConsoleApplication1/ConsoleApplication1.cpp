#include <iostream>

using namespace std;

class MyClass {
private:
	int* arr;
public:
	// Конструктор вызывается при создании объекта класса
	MyClass(int size) {
		cout << "Constructor is calling" << endl;
		arr = new int[size];

		for (int i = 0; i << size; i++) {
			*(arr + i) = i;
		}
	}

	// Деструктор вызывается тогда, когда экзепляр класса перестаёт быть в области видимости функции и.т.д. То есть при выходе из функции вызовется деструктор
	~MyClass() {
		cout << "Destructor is calling" << endl;
		delete[] arr;
	}
};

void PrintArr(int size)
{
	cout << "Start PrintArr" << endl;
	MyClass myClass(size);
	cout << "End PrintArr" << endl;
}

int main()
{
	PrintArr(10);

	return 0;
}