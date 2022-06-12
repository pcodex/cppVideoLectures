#include <iostream>
#include <string>
using std::cout;

//function template
template <typename T, typename Q>
void myFunction(T param1, Q param2)
{
	cout << "param1 is : " << param1 << "\n";
	cout << "param2 is : " << param2 << "\n";
}


int main()
{
	cout << "This program demonstrates function templates " << "\n";

	//instantiating the template by calling the function and supplying arguments
	myFunction("C++ Course", 2022);

	myFunction(2002, 45.5);

	myFunction(100.3455, "C++");

	return 0;
}