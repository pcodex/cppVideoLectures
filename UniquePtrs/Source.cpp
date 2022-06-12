#include <iostream>
#include <memory>
using namespace std;



int main()
{
	//Initialize
	unique_ptr<int> uptr(new int(99));
	cout << "The integer value is pointed to by uptr is  " << *uptr<<endl;

	//Assigning
	//unique_ptr<int> u2ptr(uptr);
	

	//Releasing
	//uptr.release(); //uptr is now set to null
	//accessing a null ptr will cause an exception
	//cout << "The integer value is pointed to by uptr is  " << *uptr<<endl; 

	//Resetting
	unique_ptr<int> u2ptr(uptr.release());
	cout << "The integer value is pointed to by u2ptr is  " << *u2ptr<<endl; 
	 
	//Initialize and reset
	unique_ptr<int> u3ptr(new int(2022));
	cout << "The integer value is pointed to by u3ptr is  " << *u3ptr << endl;
	u3ptr.reset(u2ptr.release());
	cout << "The integer value is pointed to by u3ptr after the reset is  " << *u3ptr << endl;	

	return 0;
}