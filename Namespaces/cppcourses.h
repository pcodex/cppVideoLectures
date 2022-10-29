#ifndef _CPPCOURSESH_
#define _CPPCOURSESH_

//separate the interface from the implementation
//place the interface and declarations in a separate file
namespace LearnCPP
{
	extern double adblVal;

	class MyClass
	{
		int cvar;

	public:
		MyClass(int val):cvar(val)
		{}

		void display();	//declare the interface
	};
}

#endif