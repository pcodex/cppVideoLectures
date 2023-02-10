//File Operations

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	
	//Reading from a file
	ifstream myInputFile("C:/CPP/professions.txt");		

	//ifstream also inherits from istream
	while (myInputFile)
	{
		string aline;
		getline(myInputFile, aline);
		cout << aline << endl;
	}

	myInputFile.close();
		
	//Writing to a file
	//ofstream also inherits from ostream
	ofstream myOutputFile("C:/CPP/professions.txt", ios::app);
	cout << "Enter a profession : ";
	string aprofession;
	while (getline(cin, aprofession)) {

		myOutputFile << "\n"<<aprofession;
	}	

	myOutputFile.close();
	
	return 0;
}