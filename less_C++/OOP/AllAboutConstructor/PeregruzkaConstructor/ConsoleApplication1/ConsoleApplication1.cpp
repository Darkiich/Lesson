#include <iostream>

using namespace std;

class Point {
private:
	int x, y;

public:
	Point() {
		x = 0;
		y = 0;
	}

	Point(int s_x, int s_y) {
		x = s_x;
		y = s_y;
	}

	void display() {
		cout << "X: " << x << " Y: " << y << endl;
	}
};

int main()
{
	Point p1;
	Point p2(10, 20);

	p1.display();
	p2.display();

	return 0;
}