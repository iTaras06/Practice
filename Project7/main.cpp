#include <iostream>
#include <time.h>
using namespace std;

class Lift
{
	char* cond_floor;
	char* swit;
	char* cond;
	int floor;
	int tap_floor;
public:
	Lift(const char* cf, const char* s, const char* c, int f, int tf)
	{
		cond_floor = new char[strlen(cf) + 1];
		strcpy_s(cond_floor, strlen(cf) + 1, cf);
		swit = new char[strlen(s) + 1];
		strcpy_s(swit, strlen(s) + 1, s);
		cond = new char[strlen(c) + 1];
		strcpy_s(cond, strlen(c) + 1, c);
		floor = f;
		tap_floor;
	}
	~Lift()
	{
		delete[] cond_floor;
		delete[] swit;
		delete[] cond;
	}
	void Print()
	{
		cout << "Lift\n";
		cout << "Condition floor: " << cond_floor << "\nSwitch: " << swit << "\nCondition: " << cond;
		cout << "\nFloor: " << floor << "\nTap floor: " << tap_floor << "\n\n";
	}
};

int main()
{
	Lift obj1("lower", "on", "working", 3, 1);
	obj1.Print();
	Lift obj2("upper", "off", "not working", 7, 7);
	obj2.Print();
}