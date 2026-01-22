#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	/* Вывод всех символов ASCII
	 ASCII - это присвоенные символы через числа. Например 40 - это символ '('
	 В ASCII символах есть такой, который проигрывает системный звук - это символ с номером 7*/
	for (int i = 0; i < 256; i++)
	{
		cout << "Элемент " << i << ": " << (char)i << endl;
	}
}