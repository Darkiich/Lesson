#include <iostream>
#define MY_INT 5
#define MY_INT_WITH_PARAMETERSS(a, b) (a + b)

using namespace std;

int main()
{
	int a = 0;
	cout << "Before: " << a << endl;

	a = MY_INT;
	cout << "After: " << a << endl;

	cout << "Sum: " << MY_INT_WITH_PARAMETERSS(a, 10) << endl;
}