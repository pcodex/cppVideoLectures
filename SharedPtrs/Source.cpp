//Demonstrate the use of shared pointers

#include <iostream>
#include <memory>

using namespace std;

void display(shared_ptr<int> val)
{
	cout << "The value is " << *val;
	cout << "\ndisplay() : Shared pointer count is : " << val.use_count()<<endl;
}


class MyClass {
	int a;
	float b;
public:
	MyClass(int v1, float v2):a(v1),b(v2)
	{}
};

int main()
{
	//Create a shared pointer	
	shared_ptr<int> shptr1 = make_shared<int>(55);
	
	shared_ptr<MyClass> shptrx = make_shared<MyClass>(24, 45.6);
	shared_ptr<MyClass> shptrx2 = shptrx;
	cout << "The count of the shared ptr pointing to a MyClass object is  " << shptrx.use_count() << endl;
	
	
	cout << "Shared pointer count is : " << shptr1.use_count() << endl;
	
	//initialize a new shared pointer with the existing one
	shared_ptr<int> shptr2 = shptr1;
	cout << "Shared pointer count is : " << shptr2.use_count() << endl;

	//pass the shared pointer to a function
	display(shptr2);
	cout << "Shared pointer count is : " << shptr2.use_count() << endl;
	cout << "Shared pointer count is : " << shptr1.use_count() << endl;	

	return 0;
}

