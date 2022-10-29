//Using namespaces

#include "cppcourses.h"  //include the required header
#include <iostream>

//using namespace LearnCPP;  //using directive. Not recommended since it imports the entire namespace

int main()
{
	using LearnCPP::adblVal;  //using declarations are specific
	using LearnCPP::MyClass;  //similar to declaring local variables

	
	MyClass obj1(2834);
	
	obj1.display();

	//you can also directly access adblVal since it has been made visible here
	std::cout << "Accessing adblVal directly in the main function. Value is : " << adblVal;

	return 0;
}