//Program to demonstate conditional execution using IF-ELSE
#include <iostream>

using std::cout; 
using std::cin;

int main()
{
	int lo = 48;
	int lomed = 60;
	int med = 70;
	int hi = 90;

	cout << "\nEnter the current temperature : ";
	int currtemp = 0;
	cin >> currtemp;

	if (currtemp < lo)
		cout << "\n It's chilly";
	else if (currtemp > lo && currtemp <= med)
	{
		if (currtemp < lomed) //58
			cout << "\nIt's still a bit cold";
		else //65
			cout << "\n It's pleasant";
	}
	else if(currtemp > med && currtemp < hi)
		cout << "It's hot";
	else
		cout << "I need a ton of ice";	


	return 0;
}