#include <iostream>
using namespace std;

class Lift
{
	char* cond_floor;
	char* swit;
	char* cond;
	int floor;
	int tap_floor;
public:
	Lift(const char* cf, const char* s, const char* c, int f, int tf) :floor(f), tap_floor(tf)
	{
		cond_floor = new char[strlen(cf) + 1];
		strcpy_s(cond_floor, strlen(cf) + 1, cf);
		swit = new char[strlen(s) + 1];
		strcpy_s(swit, strlen(s) + 1, s);
		cond = new char[strlen(c) + 1];
		strcpy_s(cond, strlen(c) + 1, c);
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
		cout << "Condition floor: " << cond_floor << "\nLift switch: " << swit << "\nCondition lift: " << cond;
		cout << "\nFloor: " << floor << "\nTap floor: " << tap_floor << "\n\n";
	}
	void SetCondFloor(const char* cf)
	{
		if (cond_floor != nullptr)
		{
			delete[] cond_floor;
		}
		cond_floor = new char[strlen(cf) + 1];
		strcpy_s(cond_floor, strlen(cf) + 1, cf);
	}
	char* GetCondFloor()
	{
		return cond_floor;
	}
	void SetSwit(const char* s)
	{
		if (swit != nullptr)
		{
			delete[] swit;
		}
		swit = new char[strlen(s) + 1];
		strcpy_s(swit, strlen(s) + 1, s);
	}
	char* GetSwit()
	{
		return swit;
	}
	void SetCond(const char* c)
	{
		if (cond != nullptr)
		{
			delete[] cond;
		}
		cond = new char[strlen(c) + 1];
		strcpy_s(cond, strlen(c) + 1, c);
	}
	char* GetCond()
	{
		return cond;
	}
	void SetFloor(int f)
	{
		floor = f;
	}
	int GetFloor()
	{
		return floor;
	}
	void SetTapFloor(int tf)
	{
		tap_floor = tf;
	}
	int GetTapFloor()
	{
		return tap_floor;
	}
};

int main()
{
	Lift obj1("upper", "on", "working", 3, 1);
	obj1.Print();
	obj1.SetCondFloor("upper");
	cout << "New condition floor: " << obj1.GetCondFloor() << "\n";
	obj1.SetSwit("off");
	cout << "New lift switch: " << obj1.GetSwit() << "\n";
	obj1.SetCond("not working");
	cout << "New condition lift: " << obj1.GetCond() << "\n";
	obj1.SetFloor(10);
	cout << "New floor: " << obj1.GetFloor() << "\n";
	obj1.SetTapFloor(10);
	cout << "New tap floor: " << obj1.GetTapFloor() << "\n\n";

	Lift obj2("upper", "off", "not working", 7, 7);
	obj2.Print();
	obj2.SetCondFloor("lower");
	cout << "New condition floor: " << obj2.GetCondFloor() << "\n";
	obj2.SetSwit("on");
	cout << "New lift switch: " << obj2.GetSwit() << "\n";
	obj2.SetCond("working");
	cout << "New condition lift: " << obj2.GetCond() << "\n";
	obj2.SetFloor(6);
	cout << "New floor: " << obj2.GetFloor() << "\n";
	obj2.SetTapFloor(17);
	cout << "New tap floor: " << obj2.GetTapFloor() << "\n\n";

}
