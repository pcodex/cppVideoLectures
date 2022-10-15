//Inheritance, Virtual functions and dynamic binding
#include <iostream>
#include <string>

using namespace std;

class Vehicle //Base class
{
	int chassisNum;
	string engineType; //electric, petrol, diesel

public:
	Vehicle(int num, string type) : chassisNum(num), engineType(type)
	{

	}

	string getEngineType()
	{
		return engineType;
	}

	virtual void startVehicle() //this function will be overridden in the derived classes
	{
		cout << "Vehicle : startVehicle\n";
	}

};

class Car : public Vehicle //Car object = Vehicle sub-object + Car specific sub-object
{	
	string carType; //hatch, sedan, SUV

public:
	Car(int num, string etype, string cType):Vehicle(num,etype),carType(cType)
	{}

	void startVehicle() 
	{
		cout << "Car : startVehicle\n";
		//logic to start a car
		//specific only to the car
	}
};

class Truck : public Vehicle
{
	string truckType; //flatbed, box truck, pickup, semi

public:
	Truck(int num, string etype, string tType) :Vehicle(num, etype), truckType(tType)
	{}

	void startVehicle()
	{
		cout << "Truck : startVehicle\n";
		//this is specific to trucks
	}
};


int main()
{
	
	Vehicle v1(0, "General");
	cout<<v1.getEngineType()<<endl;
	v1.startVehicle();
	

	Car c1(234, "petrol", "sedan");
	cout << c1.getEngineType() << endl;
	c1.startVehicle();

	Truck t1(933, "diesel", "flatbed");
	cout << t1.getEngineType() << endl;
	t1.startVehicle();
	
	
	//Base Pointer
	Vehicle* vhptr = &c1;
	cout<<vhptr->getEngineType()<<endl;

	vhptr = &t1;
	cout<<vhptr->getEngineType()<<endl;

	//truck object
	vhptr->startVehicle();

	vhptr = &c1;
	vhptr->startVehicle();
	
	
	return 0;

}