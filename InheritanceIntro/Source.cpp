//Introduction to Inheritance
#include <iostream>
#include <string>

using namespace std;

class Animal
{
	int noOfLegs;
	string color;
	string habitat;

protected:
	int c, d;	
	
public:
	Animal(int alegs, string acolor, string ahabitat)
	{
		noOfLegs = alegs;
		color = acolor;
		habitat = ahabitat;
	}

	int getNoOfLegs()
	{
		return noOfLegs;
	}

	string getColor()
	{
		return color;
	}

	string getHabitat()
	{
		return habitat;
	}

	//virtual functions
	virtual void move() {
		cout << "Animal is moving\n";
	}

	virtual void display()
	{
		cout << "Animal::Legs " << noOfLegs << endl;
		cout << "Animal::color " << color << endl;
		cout << "Animal::habitat " << habitat << endl;
	}

	//virtual destructor
	~Animal()
	{}
	
};

class Chimpanzee : public Animal
{
	int noOfHands;

public:
	Chimpanzee(int nlegs, string ncolor, string nhabitat, int nhands) : Animal(nlegs, ncolor, nhabitat), noOfHands(nhands)
	{

	}

	//overridden functions
	virtual void move() override
	{
		cout << "Chimpanzee is walking\n";
	}

	virtual void display() override
	{
		cout << "Chimpanzee::Legs " << getNoOfLegs() << endl;
		cout << "Chimpanzee::color " << getColor() << endl;
		cout << "Chimpanzee::habitat " << getHabitat() << endl;
		cout << "Chimpanzee::Hands " << noOfHands << endl;
	}

	//specific to the child class
	void talk()
	{
		cout << "Chimpanzee is talking\n";
	}
};


int main()
{
	Animal animal1(4, "brown", "plains");

	animal1.display();
	animal1.move();

	//Base pointer
	Animal* aptr;
	aptr = &animal1;

	aptr->move();

	Chimpanzee chimp(2, "black", "forest", 2);
	chimp.display();
	chimp.move();
	chimp.talk();

	//Dynamic binding
	aptr = &chimp;
	aptr->move();
	aptr->display();
	
	//aptr->talk();

	return 0;
}