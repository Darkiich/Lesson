#include <iostream>

using namespace std;

class MyClass {
private:
	int* arr;
	int size;
public:
	MyClass(int size) {

		this->arr = new int[size];
		this->size = size;

		for (int i = 0; i < size; i++)
		{
			*(arr + i) = i + 1;
		}
	}

	MyClass(const MyClass& obj) {
		this->size = obj.size;
		this->arr = obj.arr;

		arr = new int[obj.size];

		for (int i = 0; i < obj.size; i++)
		{
			*(arr + i) = obj.arr[i];
		}
	}

	~MyClass() { delete[] arr; }

	MyClass & operator = (const MyClass& obj) {
		this->size = obj.size;

		if (this->arr != nullptr) {
			delete[] arr; // Удаляем адрес в памяти, если он не пустой(заполненный)
		}

		this->arr = new int[obj.size]; // После очистки заполняем

		for (int i = 0; i < obj.size; i++)
		{
			*(arr + i) = obj.arr[i];
		}

		return *this; // Возвращаем класс
	}

	void show(const MyClass& obj) {
		for (int i = 0; i < obj.size; i++)
		{
			cout << obj.arr[i] << " ";
		}
	}
};

int main()
{
	MyClass a(2);
	MyClass b(5);
	MyClass c(10);

	a.show(a);
	cout << endl;
	a.show(b);
	cout << endl;
	c.show(c);
	c = a = b; // При типе void для перегрузки оператора "=" будет ошибка. А при возвращении *this не будет ошибки
}