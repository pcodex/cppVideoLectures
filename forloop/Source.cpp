#include <iostream>
using std::cout;

int main()
{
	cout << "This program will demonstrate the for loop\n";
	
	int sum = 0;
	int num = 0;
	for (num = 5; num < 10; ++num)
	{
		cout << "The value of num is :" << num << "\n";
		sum = sum + (num * 2);
		cout << "The intermediate value of sum is :" << sum << "\n";
		
	}

	cout << "The value of num is : " << num << "\n";
	cout << "The final value of sum is : " << sum << "\n";

	return 0;
}