#include <iostream>

using namespace std;

// Дружественная функция позволяет получить доступ к полям класса из вне

class MyClass {
private:
	int value;
public:
	MyClass(int val) : value(val) {}
	friend void friendFunction(MyClass& other);
	friend void friendFunctionSetValue(MyClass& other);
};

void friendFunction(MyClass& other) {
	cout << "friend func 'friendFunction' is calling" << endl;
	cout << "Private field 'value': " << other.value << "\n\n";
}

void friendFunctionSetValue(MyClass& other) {
	cout << "friend func 'friendFunctionSetValue' is calling" << "\n\n";
	other.value = 100;
}

int main()
{
	MyClass obj(42);
	friendFunction(obj);
	friendFunctionSetValue(obj);
	friendFunction(obj);
	return 0;
}