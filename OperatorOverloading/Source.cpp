//Operator Overloading

#include <iostream>
using namespace std;


class MyInteger
{
	int rawInput;

public:
	MyInteger(int val) : rawInput(val)
	{}	

	MyInteger operator+(MyInteger& m2)  
	{
		int res = rawInput + m2.rawInput;
		return MyInteger(res);
	}

	void display()
	{
		cout << "The internal value of your MyInteger is " << rawInput << endl;
	}

	friend ostream& operator<<(ostream& os, MyInteger obj);

};

ostream& operator<<(ostream& os, MyInteger obj)
{
	os << "This is the internal value of MyInteger "<<obj.rawInput << endl;

	return os;
}



int main()
{
	MyInteger num44(44);
	MyInteger num88(88);

	MyInteger numRes = num44 + num88;
//	numRes.display();
	cout << numRes;

	//numRes.display();
	//cout << numRes;

	return 0;
}



//Notes
/*
You cannot overload the member, dot, ternary operator
It is not recommended to overload the logical operators, comma operator

Operator can be overloaded as member functions or non-member functions

What must be member functions?
assignment, ->, subscript, ()

When can you use member functions?
If the state of the object is being changed.
for eg. increment, decrement

When do you use non-member functions?
- Symmetric operators like arithmetic, logical and relational operators where the operands can be on either side
- when it is intuitive. for eg. input or output stream operators



*/