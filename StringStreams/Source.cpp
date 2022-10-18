//Demonstrate the use of string streams

#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int main()
{	
	/*
	
	string strInput;
	cout << "Enter a line of input :" << endl;
	getline(cin, strInput);

	//bind the istringstream to the string we just read
	istringstream iss(strInput);
	string tokens;

	//read from the istringstream
	while (iss >> tokens)
		cout << tokens << endl;
		*/
	

	cout << "Enter a few numbers :" << endl;	
	int numInput = 0;
	ostringstream oss;
	oss << "The numbers you entered are : ";
	while (cin >> numInput)
		oss << numInput << " ";	

	cout << oss.str();

	return 0;
}