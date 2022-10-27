//Program to read input from the console
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your name : ";

	std::string aname;

	std::cin >> aname; //cin abstracts the standard input and is tied to the console
	std::cout << "\nThe name you entered is : " << aname;

	return 0;
}