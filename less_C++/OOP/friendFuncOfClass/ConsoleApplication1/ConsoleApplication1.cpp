#include <iostream>

using namespace std;

class TV;

class Human {
public:
    bool checkIsPoweredTV(TV& tv);
};

class TV {
private:
    int channel;
    int volumeLevel;
	bool power;
public:
    TV() {
        channel = 1;
        volumeLevel = 1;
		power = false;
	}

    TV(int channel, int volumeLevel, bool power) {
        this->channel = channel;
        this->volumeLevel = volumeLevel;
        this->power = power;
	}

	friend bool Human::checkIsPoweredTV(TV& tv);
};

bool Human::checkIsPoweredTV(TV& tv) {
    tv.power == false ? cout << "TV is off" : cout << "TV is on";
    return tv.power;
}

int main()
{
    TV tv1(5, 10, true);
    Human human1;
	human1.checkIsPoweredTV(tv1);
}