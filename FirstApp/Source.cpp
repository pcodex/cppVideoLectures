//Initial program to demonstrate stdin and stdout
#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello World\n"; //cout is an object of the class ostream

	std::cout << "\nEnter your name :";
	std::string aname;

	std::cin >> aname; //cin is an object of the class istream
	std::cout << "\nThe name that you entered is :" << aname;

	return 0;
}