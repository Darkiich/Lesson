#include <iostream>
#define DEBUG
//#define FUN
#define LEVEL_DEBUG 5
#define LEVEL_HAPPY 4

using namespace std;

// Условная компиляция
int main()
{
	setlocale(LC_ALL, "ru");

// Проверка наличия макросов. If defined(если определён)
#ifdef DEBUG // Если макрос DEBUG определен
	cout << "Дебаг определён." << endl;

#else // Если макрос DEBUG не определен
	cout << "Дебаг не определён." << endl;
#endif




// Проверка отсутствия макросов. If not defined(если не определён)
#ifndef FUN // Если макрос FUN не определен
	cout << "Фан не определён." << endl;

#else // Если макрос FUN определен
	cout << "Фан определён." << endl;
#endif




// Проверка на значение макроса. If (если)
#if LEVEL_DEBUG > 4 // Если значение макроса LEVEL_DEBUG больше 4
	cout << "Уровень дебага больше 4." << endl;

#else // Если значение макроса LEVEL_DEBUG не больше 4
	cout << "Уровень дебага не больше 4." << endl;
#endif




// Проверка на значение макроса. If (если) и elif (иначе если)
#if LEVEL_HAPPY < 4 // Если значение макроса LEVEL_DEBUG равно 4
	cout << "Уровень дебага больше 4." << endl;

#elif LEVEL_HAPPY > 0 // Если значение макроса LEVEL_DEBUG больше 0
	cout << "Уровень дебага больше 0." << endl;

#else // Во всех остальных случаях
	cout << "Уровень дебага равен 0." << endl;
#endif
}