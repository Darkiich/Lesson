#include <iostream>

using namespace std;

class Point {
private:
    int size;
    int* arr;
public:
    Point(int size, int *arr) {
        cout << "Point constructor " << this << endl;

        this->size = size;
        this->arr = arr;

        for (int i = 0; i < size; i++)
        {
            arr[i] = i + 1;
        }

        cout << "first arr: " << arr << ", [ ";
        ShowArray(arr);
        cout << "]\n\n";
    }

    // Конструктор копирования. Копирует данные из прошлого объекта класса, в текущий
    Point(const Point& obj) {
        cout << "Point constructor copy " << this << endl;

        this->size = obj.size;
        this->arr = new int[obj.size];

        for (int i = 0; i < obj.size; i++)
        {
            this->arr[i] = obj.arr[i];
        }

        cout << "second arr: " << arr << ", [ ";
        ShowArray(arr);
        cout << "]\n\n";
    }

    ~Point() {
        cout << "Point destructor " << this << endl;
        cout << "del arr: " << arr << "\n\n";
        delete[] arr;
    }

    void ShowArray(int *arr)
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(arr + i) << " ";
        }
    }
};

int main() {
    int size = 10;
    int* arrr = new int[size];

    Point point(size, arrr);
    Point pointt(point);
    return 0;
}