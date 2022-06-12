#include <iostream>

using std::cout;


int main()
{
	unsigned val = 0;

	while (val < 10) //this condition checks if val is less than 10.
	{
		//this block of code will execute only as long as val is less than 10
		cout << "The intermediate value of val is : " << val << "\n";
		val++;
	}
	cout << "The final value of val is : " << val << "\n";

	return 0;

}