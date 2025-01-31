#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	bool switch_conf = true;
	string confirm;
	char sign;


	while (switch_conf)
	{
		cout << "\nEnter first number: ";
		cin >> a;

		cout << "Enter second number: ";
		cin >> b;

		cout << "Choice sign (+, -, *, /): ";
		cin >> sign;

		switch (sign)
		{
			case '+':
				cout << "a + b = " << a + b << endl;
				break;

			case '-':
				cout << "a - b = " << a - b << endl;
				break;

			case '*':
				cout << "a * b = " << a * b << endl;
				break;

			case '/':
			    if (b != 0)
				{
					cout << "a / b = " << a / b << endl;
                }
				else
				{
                    cout << "Error: Division by zero!" << endl;
                }
                break;
		}

		cout << "Exit(y/n): ";
		cin >> confirm;

		if (confirm == "y")
		{
			switch_conf = false;
		}
		else
		{
			continue;
		}
	}
}