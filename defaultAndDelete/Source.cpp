#include <iostream>
using namespace std;

class MyClass
{
	int aval = 10;	
public:
	MyClass() = default;
	MyClass(const MyClass&) = delete;
	MyClass& operator=(const MyClass&) = delete;

	~MyClass() = delete;

	void display()
	{
		cout << "The value is  " << aval << endl;
	}
};

int main()
{
	//MyClass obj1;
	//MyClass obj2;

	MyClass* obptr = new MyClass;
	//obj1.display();
	//obj2.display();

	
	//obj1.display();
	obptr->display();
	
    return 0;
}

