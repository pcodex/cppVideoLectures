#include <iostream>
#include <memory>
using namespace std;



//Weak Pointers

int main()
{

	shared_ptr<int> sp = make_shared<int>(92);
	cout << "The pointer count is " << sp.use_count() << endl;

	weak_ptr<int> wp(sp);
	cout << "The pointer count is " << wp.use_count() << endl;	

	
	//Access the value using lock() and check count
	shared_ptr<int> sp2;
	if (sp2 = wp.lock())
	{
		cout << "1.The value pointed to by sp2 and wp is " << *sp2 << endl;
		cout << "1.The pointer count is " << sp.use_count() << endl;
		cout << "1.The pointer count is " << sp2.use_count() << endl;
		cout << "1.The pointer count is " << wp.use_count() << endl;
	}
	// 
	// 
	//Reset 1st shared pointer and check count
	sp.reset();
	cout << "2.The pointer count is " << sp.use_count() << endl;
	cout << "2.The pointer count is " << sp2.use_count() << endl;
	cout << "2.The pointer count is " << wp.use_count() << endl;
	
	//Reset 2nd shared pointer and check count
	sp2.reset();
	cout << "3.The pointer count is " << sp.use_count() << endl;
	cout << "3.The pointer count is " << sp2.use_count() << endl;
	cout << "3.The pointer count is " << wp.use_count() << endl;

	shared_ptr<int> sp4;
	if (sp4 = wp.lock())
	{
		cout << "The shared pointer is still pointing to valid memory" << endl;
	}
	else
	{
		cout << "The shared pointer has not been initialized" << endl;
	}

	return 0;

}