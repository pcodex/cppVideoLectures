//Program to demonstrate class templates
#include <iostream>
#include <string>

using namespace std;


template <typename X>
class Adder
{
	X myval1;
	X myval2;

public:
	//constructor
	Adder(const X& val1, const X& val2):myval1(val1),myval2(val2)
	{}
	
	//member function declaration
	X add();


	//function defined inline
	void display(){
		cout << "The result of addition is  " << add()<<endl;	}
	
};


//member function definition outside 
template <typename X>
X Adder<X>::add()
{
	return myval1 + myval2;
}



int main()
{
	Adder<int> adder1(2, 3);
	adder1.display();

	Adder<string> adderstr("Hello! ", "How are you?");
	adderstr.display();


	return 0;
}