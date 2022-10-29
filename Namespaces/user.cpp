//Using namespaces

#include "cppcourses.h"  //include the required header

//using namespace LearnCPP;  //using directive. Not recommended since it imports the entire namespace

int main()
{
	using LearnCPP::adblVal;  //using declarations are specific
	using LearnCPP::MyClass;  //similar to declaring local variables

	
	MyClass obj1(2834);
	
	obj1.display();

	return 0;
}