#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello World\n"; 

	std::cout << "Enter your name :"; //ostream
	
	std::string aname;
	
	std::cin >> aname; //istream
	std::cout << "\nYou entered : " << aname;

	return 0;
}