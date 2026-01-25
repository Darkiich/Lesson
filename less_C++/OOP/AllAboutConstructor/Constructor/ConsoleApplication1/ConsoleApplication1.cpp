#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int s_x, int s_y) {
		x = s_x;
		y = s_y;
	}

	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};

int main()
{
	Point p(10, 20);
	p.display();
}