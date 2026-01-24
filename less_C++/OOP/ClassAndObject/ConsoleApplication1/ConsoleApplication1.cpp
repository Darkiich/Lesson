#include <iostream>

using namespace std;

class Human {
// Неважно какой модификатор доступа стоит здесь (public, private, protected), потому что в классе видны все члены объекты
private:
	string name = "John"; // Нельзя использовать через экземпляр класса

	string printName() {
		cout << "Name: " << name;
	}

protected:
	float height = 170; // Будет виден в производных классах


public:
	int age = 5; // Можно использовать через экземпляр класса
	int weight = 50;
	string eyeColor = "green";

	void showInfo() {
		cout << "Age: " << age << ", Weight: " << weight << ", EyeColor: " << eyeColor << endl;

	}

};

int main()
{
	Human human;
	cout << human.age << endl;
	human.showInfo();
	return 0;
}