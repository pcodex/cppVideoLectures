#include <iostream>

//This is a sample program for comments

/*
Author : Prabhu M
Date : 8-May-2022
Description :
Inputs : 
Outputs :
*/


int main()
{
	//Get the user to input 2 numbers
	int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;

	//Store the result of 'a' squared
	int interResult1 = num1 * num1;

	//Store the result of 'b' squared
	int interResult2 = num2 * num2;
	
	//Store the result of '2*a*b'
	int interResult3 = 2 * num1 * num2;	

	//Store the final result of (a+b) the whole squared
	int finalResult = interResult1 + interResult2 + interResult3;

	std::cout << "The output is :"<<finalResult << "\n";

	return 0;
}