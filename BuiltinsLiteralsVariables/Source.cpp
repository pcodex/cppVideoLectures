//Built-ins, Literals, Variables, Declaration, Definition, Identifiers, Scope
#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
	//some of the major built-in types C++ supports are mentioned below :
	/*
	
	void
	bool, wchar_t, both signed and unsigned for char, short, int, long, long long
	float, double

	*/

	//Declarations, Definitions, Type conversions
	extern int exval;   //This is just a declaration. exval has been defined elsewhere
	//cout << "\n exval is " << exval;

	//Identifiers can contain underscores, letters and numbers. You can start with an underscore.	
	//Identifiers are case sensitive
	//Do not use the reserved words like 'for', 'auto', 'class' etc.
	
	int aval = -29;
	int aVal = 29;
	cout << "\naval is : " << aval << " and aVal is : " << aVal;

	double dval = 82.343;
	aval = dval;
	cout << "\n\nThe new integer value is " << aval;

	//mixing signed and unsigned
	unsigned uival = 73;
	int ival = -98;
	cout << "\n\nThe sum of an unsigned and signed is : "<<ival + uival;

	//Literals
	int lval = 29;  //regular decimal
	int hexval = 0x14; //20 expressed as hexadecimal
	int octval = 073;  //59 expressed as octal

	cout << "\n\n lval : " << lval;
	cout << "\n hexval : " << hexval;
	cout << "\n octval : " << octval;

	char achar = 'a';

	//initialize using a hexadecimal literal
	char hexchar = '\x4d'; //4d represents the numerical value of the character M
	cout << "\n\nThe character bchar is : " << hexchar;

	string mystr = "Seize the day!";
	cout << "\n\nThe string mystr is : " << mystr;

	{
		string mystr = "\nInner mystr is : Hello!! How are you?";
		cout << mystr;		
	}

	cout << "\nNow string mystr is : " << mystr;

	return 0;
}