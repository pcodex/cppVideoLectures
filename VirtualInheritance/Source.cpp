//Virtual Inheritance and the usage of virtual base classes
#include <iostream>
#include <string>

using std::string;
using std::cout;

class Animal
{
protected:
	int weight;
	int height;
public:
	Animal(int w, int h):weight(w),height(h)
	{}	
};

class Bear : virtual public Animal
{
protected:
	string type;

public:
	Bear(int w, int h, string t):Animal(w,h),type(t)
	{}
};

class Raccoon : virtual public Animal
{
protected:
	string color;
public:
	Raccoon(int w, int h, string c):Animal(w,h),color(c)
	{}

};

class Panda : public Bear, public Raccoon
{
	int age;

public:
	Panda(int w, int h, string t, string c, int a):Animal(w,h),Bear(w,h,t),Raccoon(w,h,c),age(a)
	{}

	void display()
	{
		cout << "My " << color << " complexioned Panda weighs " << weight << " pounds and is " << height << " cm tall. \nIt is a " << type << " Panda which is " << age << " years young.\n";
	}

};

int main()
{
	Panda myPanda(200, 170, "Red", "Wheat", 8);
	myPanda.display();

	return 0;

}