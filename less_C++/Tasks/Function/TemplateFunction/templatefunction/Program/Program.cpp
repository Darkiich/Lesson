#include <iostream>

using namespace std;

/* template - указывает на то, что функция будет шаблонная
*  typename - указывает на то, что тип данных(T, TFact ....) может быть любой
* 
*  Синтаксис: template <typename T>, где T - идентификатор
*/
template <typename T>
T Sum(T a, T b) {
	return a + b;
}

template <typename TFact>
TFact Factorial(TFact a) {
	int n;
	int i;
	int res;

	cout << "Факториал: ";
	cin >> n;
	res = 1;
	for (i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << Sum(6, 4) << endl;
	cout << Factorial(5) << endl;
}