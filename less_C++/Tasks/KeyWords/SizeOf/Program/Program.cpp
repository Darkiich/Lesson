#include <iostream>

using namespace std;

int main()
{
	/* sizeof - это кл.слово, которое возвращает размер чего-то в байтах */

	// Работает с инициализированными и неинициализированными
	int a;
	int b = 10;
	cout << sizeof(a) << endl; // 4 байт
	cout << sizeof(b) << endl; // 4 байт

	/* sizeof(arr) / sizeof(arr[0]) - эта конструкция рассчитает кол-во элементов и пробежится по массиву */
	int arr[]{1, 2, 3, 4, 5};
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i];
	}
}