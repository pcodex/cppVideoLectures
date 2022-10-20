//Access control
#include <iostream>
#include <string>

using namespace std;


class MyBase
{

	int basepvt = 1;	

protected:
	int baseprot = 1;

public:
	int basepub = 1;

	MyBase()
	{}

	MyBase(int b1, int b2, int b3): basepvt(b1), baseprot(b2), basepub(b3)
	{}

	void display()
	{
		cout << "\n\nMyBase::display Output\n";
		cout << "------------------------\n";
		cout << "MyBase:basepvt : " << basepvt<<endl;
		cout << "MyBase:baseprot : " << baseprot << endl;
		cout << "MyBase:basepub : " << basepub << endl;
	}
};


class MyDer : public MyBase
{
	int derpvt;

public:
	int derpub;

	MyDer(int b1, int b2, int b3, int d1,int d2):MyBase(b1,b2,b3), derpvt(d1), derpub(d2)
	{}

	void display()
	{
		cout << "\n\nMyDer::display Output\n";
		cout << "------------------------\n";
		//cout << "MyDer::basepvt " << basepvt << endl;
		cout << "MyDer::baseprot " << baseprot << endl;
		cout << "MyDer::basepub " << basepub << endl;
		cout << "MyDer::derpvt " << derpvt << endl;
		cout << "MyDer::derpub " << derpub << endl;
	}

	friend void friendOfMyDer(MyDer& mobj);	

};

//friend functions can access private and protected members
void friendOfMyDer(MyDer& myDerObj)
{
	cout << "\n\nfriendOfMyDer Output\n";
	cout << "------------------------\n";
	cout << "MyDerFriend::derpvt " << myDerObj.derpvt<<endl;
	cout << "MyDerFriend::derpub " << myDerObj.derpub << endl;

	//private variables is not accessible
	//cout << "MyBase::basepvt " << myDerObj.basepvt<<endl;
	
	//you can only use a Derived Object reference to access protected members of the Base class
	cout << "MyDerFriend::baseprot " << myDerObj.baseprot << endl;
	cout << "MyDerFriend::basepub " << myDerObj.basepub << endl;

}


int main()
{
	MyBase myb(23, 24, 25);
	myb.display();
	//myb.baseprot = 100;
	myb.basepub = 101;
	myb.display();

	
	MyDer myd(33, 34, 35, 36, 37);
	myd.display();
	
	myd.derpub = 200;	
	myd.basepub = 300;
	myd.display();	
	
	
	//myd.basepvt = 88; //inaccessible
	//myd.baseprot = 99; //inaccessible
	//myd.derpvt = 233;  //inaccessible

	friendOfMyDer(myd);
	
	return 0;
}