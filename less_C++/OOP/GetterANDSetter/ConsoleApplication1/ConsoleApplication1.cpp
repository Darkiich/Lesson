#include <iostream>

using namespace std;

class Point {
private:
		int x;
		int y;
public:
	// Геттеры и сеттеры
	int getterX() { return x; }
	int getterY() { return y; }

	void setterX(int const valueX) { x = valueX; }
	void setterY(int const valueY) { y = valueY; }
};

int main()
{
	Point point;
	point.setterX(10);
	point.setterY(20);
	cout << "X: " << point.getterX() << ", Y: " << point.getterY() << endl;
}