//Function Overloading

#include <iostream>
#include <cmath>

using namespace std;


void add(int val1, int val2)
{
	cout << "Calling Add int " << val1 + val2 << endl;
}

void add(float val1, float val2)
{
	cout << "Calling Add float " << val1 + val2 << endl;
}

void add(double val1, double val2)
{
	cout << "Calling Add double " << val1 + val2 << endl;
}

int main()
{
	int inp1 = 0, inp2 = 0;
	cin >> inp1 >> inp2;

	add(inp1, inp2);

	double a = 23.2, b = 38.3;
	add(a, b);

	float f1 = 100.5f, f2 = 200.5f;
	add(f1, f2);

	//ambiguous since all the overloads could potentially match once a conversion happens
	float v1 = 23.4; int br = 83;
	//add(v1, br);

	return 0;

}