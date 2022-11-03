//References and Pointers
#include <iostream>

using std::cout;

int main()
{
	/************************************/
	//References
	/************************************/


	int i = 34;

	//references cannot be null and should be initialized
	//they cannot be rebound to a different object
	int &ri = i;

	cout << "\nri is :" << ri;
	ri = 344;
	cout << "\ni is :" << i;

	double dval = 93.45;
	const double &dvalcref = dval;

	//since dvalref is a reference to a constant you cannot use it to modify dval
	//dvalcref = 399.44;

	//However dval can be modified either directly or using a non-const reference
	double &dvalref = dval;
	dvalref = 77.34;
	cout << "\ndval is : " << dval;
	cout << "\ndval using the const ref dvalcref is : " << dvalcref;


	/************************************/
	//Pointers
	/************************************/

	int *pi = 0, ival = 93;
	
	pi = &ival;
	cout << "\n\n\nival is " << *pi;

	*pi = 101; //modify ival by dereferencing pi
	cout << "\nival is " << ival;

	const int ci = 39;
	const int *pci = &ci;
	cout << "\nci is " << *pci;

	float fval = 34.32f;
	const float *pfval = &fval; //pfval is a pointer to a constant float
	cout << "\nfval is " << *pfval;

	//*pfval = 35.53; //can't modify since pfval is a pointer to a constant

	//However fval is not a constant and can be modified
	fval = 84.33f;
	cout << "\nfval now  is :" << fval;
	cout << "\n*pfval is " << *pfval;



	/************************************/
	//References to Pointers
	/************************************/

	int *ptri = 0;
	int intval = 93;
	ptri = &intval;

	int* &refptri = ptri;
	cout << "\n\n\nintval via the reference to pointer  is " << *refptri;
	cout << "\nintval via the pointer is " << *ptri;
	*refptri = 389;
	cout << "\nintval now  is " << intval<<"\n";



	return 0;
}