#include <iostream>

using namespace std;


class MyClass
{
	int aval;	

public:
	MyClass(int inp):aval(inp){}

	MyClass& operator=(const MyClass& src) {
		aval = src.aval;
		return *this;
	}	

	void display()
	{
		cout << "The value is " << aval<<endl;
	}
};


int main()
{
	MyClass obj1(23);
	obj1.display();

	MyClass obj2(223);
	obj2.display();

	obj1 = obj2;
	obj1.display();	

	return 0;
}