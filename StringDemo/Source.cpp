#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
	string myname = "Prabhu";
	cout << "\nMy name is : " << myname;

	string somestr = string(5, 'a');
	cout << "\nSomestr is : " << somestr;

	string city = "Los Angeles";
	string citystr = city;

	cout << "\ncitystr is " << city;

	cout << "\n\nEnter your profession : ";
	string profstr;

	getline(cin, profstr);
	cout << "\nYour profession is " << profstr;

	//Index into a string
	cout << "\nThe 2nd character in my name is : " << myname[1];

	//Get the length of the profession string
	cout << "\nMy profession has " << profstr.length() << " characters in it";

	//there are functions to find characters in strings, replace characters etc.

	return 0;
}