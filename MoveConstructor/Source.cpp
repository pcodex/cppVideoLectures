//move constructor

#include <iostream>
#include <utility>
#include <string>
using namespace std;


class Employee
{
	string name;
	string title;
	double salary;

public:
	Employee(string nm, string tl, double sal) : name(nm), title(tl), salary(sal)
	{

	}
		
	//move constructor takes an rvalue reference
	Employee(Employee&& emp)
	{
		name = emp.name;
		title = emp.title;
		salary = emp.salary;

		emp.name = emp.title = "";
		emp.salary = 0;
	}
	

	//move assignment operator
	Employee& operator=(Employee&& e)
	{
		if (this != &e)
		{
			name = e.name;
			title = e.title;
			salary = e.salary;
		}

		e.name = e.title = " ";
		e.salary = 0;

		return *this;
	}

	
	void display()
	{
		cout << "Name : " << name << "\n" << "Title : " << title << "\n" << "Salary : " << salary << "\n";
		cout << "----------------------\n";
	}
};


int main()
{
	Employee e1("Alice", "Manager", 100.54);
	e1.display();

	//std::move() generates an rvalue reference
	//move the contents of e1 to e2. 
	Employee e2 = std::move(e1);
	e2.display();

	//e1 should be left in a valid state : safe to destroy or safe to receive new values
	e1.display();	//this is not recommended

	
	Employee e3("Bob", "Foreman", 50.54);
	e3.display();
	e3 = std::move(e2);
	e3.display();
	
	return 0;
}