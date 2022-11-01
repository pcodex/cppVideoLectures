//Vector usage
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::vector;


int main()
{
	//create a vector of size 5
	vector<int> myv1(5);
	cout << "\nThe size of myv1 is "<<myv1.size()<<"\n";
	cout << "\nThe vector myv1 is " << ((myv1.empty()) ? "empty" : "not empty")<<"\n";

	//Set all elements of a vector of size 10 to 2
	vector<int> myv2(10, 2);
	cout << "\nThe values of myv2 are :";
	for (int i = 0; i < 10; ++i)
		cout << myv2[i] << " ";
	cout << "\n";

	//use an initializer list to initialize the vector
	vector<int> myv3 = { 29, 32,55,35,24 };
	//modify each value using a range for loop
	for (int &i : myv3)
		i *= 2;

	//output the modified vector
	cout << "\nThe modified values are ";
	for (int op : myv3)
		cout<< op << " ";
	cout << "\n";

	//use the push_back() method to add elements dynamically at run time
	vector<int> myv4;
	int aval = 0;

	cout << "\nEnter values  : \n";
	while (cin >> aval)
		myv4.push_back(aval);
	
	//use an iterator to iterate over the vector
	vector<int>::iterator vit;
	cout << "\nThe values entered are : ";
	for (vit = myv4.begin(); vit != myv4.end(); ++vit)
	{
		 cout<< *vit << " ";
	}
	cout << "\n";

	//do the same but use auto instead of declaring the iterator
	cout << "\nThe values entered are : ";
	for (auto vit = myv4.begin(); vit != myv4.end(); ++vit)
	{
		 cout<< *vit << " ";
	}
	
	return 0;
}