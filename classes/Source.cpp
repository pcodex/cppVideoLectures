//Classes and the default constructor
#include <iostream>
#include <string>

using namespace std;

class Employee
{
	string name;
	unsigned empNumber = 0;
	unsigned age = 22;
	string title;

public:
	//interfaces
	Employee() = default;
	
	Employee(string ename, unsigned enumber, unsigned eage, string etitle) : name(ename), empNumber(enumber), age(eage), title(etitle)
	{

	}

	void display();	
	
};


void Employee::display()//this pointer is passed implicitly to this function
{
	cout << "Employee details\n _______________\nName : " << name << "\nNumber : " << empNumber;
	cout << "\nAge : " << age << "\nTitle : " << title << "\n\n";
}

int main()
{
	Employee e0;
	e0.display();
	
	Employee e1("Prab", 205, 32, "Engineer");
	e1.display();
	return  0;
}