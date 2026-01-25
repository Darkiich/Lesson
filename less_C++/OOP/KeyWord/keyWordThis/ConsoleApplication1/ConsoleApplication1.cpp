#include <iostream>

using namespace std;

// this - это указатель на текущий объект. То есть, через этот указатель(this) можно обращаться к членам этого объекта.

class Point {
private:
	int x, y;
public:
	Point(int x, int y) {
		this->x = x; // this->x - переменная класса, x - параметр конструктора
		this->y = y; // this->y - переменная класса, y - параметр конструктора

		cout << "Data memory: " << this << endl; // выводим адрес текущего объекта

		cout << "Constructor called for Point(" << this->x << ", " << this->y << ")" << endl;
	}
};

int main()
{
	Point p1(10, 20);
	Point p2(45, 55);
	return 0;
}