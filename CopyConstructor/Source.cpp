//Copy Constructor demo
#include <vector>
#include <iostream>
using namespace std;

class MyClass
{
	int aVal;
	float bVal;
	int* ptr;

public:
	MyClass(int a, float b, int* p ) : aVal(a), bVal(b),ptr(p)
	{}

	MyClass(const MyClass& src)
	{
		aVal = src.aVal; //memberwise initialization
		bVal = src.bVal;
		ptr = new int;  //deep copy
		*ptr = *(src.ptr);
	}

	int getaVal()
	{
		return aVal;
	}

	float getbVal()
	{
		return bVal;
	}

	int getptrVal()
	{
		return *ptr;
	}
};

void passMyClass(MyClass fnarg)
{
	cout << "fnarg values : " << fnarg.getaVal() << "," << fnarg.getbVal() << ","<<fnarg.getptrVal()<<endl;
}

int main()
{
	int* pt = new int(44);
	MyClass myc(10, 23.5f,pt);

	cout << "myc values : "<<myc.getaVal() << "," << myc.getbVal() << "," << myc.getptrVal() << endl;

	MyClass copy1(myc);
	cout << "copy1 values : "<<copy1.getaVal() << "," << copy1.getbVal() << "," << copy1.getptrVal() << endl;

	MyClass copy2 = copy1;
	cout << "copy2 values : " << copy2.getaVal() << "," << copy2.getbVal() << "," << copy2.getptrVal() << endl;

	int* pt2 = new int(885);
	MyClass copy3 = MyClass(22, 933.45f,pt2);
	cout << "copy3 values : " << copy3.getaVal() << "," << copy3.getbVal() << "," << copy3.getptrVal() << endl;

	passMyClass(copy3);

	return 0;

}