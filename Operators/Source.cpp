//Usage of various operators
#include <iostream>

using std::cout;

int main()
{
	//Arithmetic operators
	//+(addition), -(subtraction), /(division), *(multiplication), %(modulo), +(unary +), -(unary -)

	int a = -34;
	int b = 7; //disregard b's sign for the modulo operation
	cout << "-34 % 7 is : " << (a % b);

	int c = 39;
	cout << "\nNegative c is : " << -c;


	//Logical and Relational operators
	//Logical : &&(AND), ||(OR), !(NOT)
	//Relational : <(less than), <=(less than or equal), >(greater), >=(greater or equal), !=(not equal), ==(equal)

	double mySalary = 3400, mySavings = 1000;
	if ((mySalary > 5000) && (mySavings > 100000))
		cout << "\nI am rich";
	else if ((mySalary > 3000 && mySalary <= 5000) || (mySavings > 50000))
		cout << "\nI am moderately rich";
	else
		cout << "\n Better start working ";


	//Increment and Decrement operators
	//Post Increment - returns the old value
	int jnum = 90;
	int pnum = jnum++;
	cout << "\nPost Increment pnum is : " << pnum;
	cout << "\nPost Increment jnum is : " << jnum;

	//Pre Increment - returns the incremented value
	jnum = 900;
	pnum = ++jnum;
	cout << "\nPre Increment pnum is : " << pnum;
	cout << "\nPre Increment jnum is : " << jnum;


	//Bitwise operators
	//& - AND, | - OR, ~ - NOT, ^ - XOR, << - left shift, >> - right shift

	//I have a bit pattern which is the value 8. 
	unsigned aval = 8;					//0000 0000 0000 1000
	//I now also want to set bit 8 to 1 counting from the least significant side
	//ie. I need this 0000 0000 1000 1000
	
	//set only bit position 8 to 1. We get 128.
	unsigned setter = 128;				//0000 0000 1000 0000

	//OR the 2 bit patterns and you get the final result with the 8th bit also set to 1
	unsigned finalval = aval | setter;  //0000 0000 1000 1000
	cout << "\n The modified value is " << finalval;

	finalval >>= 1; //using compound assignment. equivalent to finalval = finalval >> 1;
	cout << "\n Right shifted by 1 bit " << finalval;

	//Other operators : sizeof, comma, member access, conditional operator 
	

	return 0;
}