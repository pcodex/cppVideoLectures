#include "cppcourses.h"
#include <iostream>

//continue adding to the namespace by opening the existing namespace
//place the definition or implementations in this source file
namespace LearnCPP
{
	double adblVal = 100.345;

	void MyClass::display()
	{
		std::cout << "The class member variable value is : " << cvar<<"\n";
		std::cout << "The namespace variable adblVal is : " << adblVal<<"\n";
	}


}