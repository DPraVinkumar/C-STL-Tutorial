#include<iostream>
#include<map>
#include<string>


using namespace std;


int main()
{
	cout << "Demonstrating the STL map" << endl;

	map<string , long> directory;

	directory["Rani"] = 1234;
	directory["Rudra"] = 5678;
	directory["Aarya"] = 9101112;


	//read some names and look up their names in map
	string name;
	while (cin >> name)
	{
		if( name == "exit")
			break;
	
		if(directory.find(name) != directory.end())
		{
			cout << "The Phone number for " << name
			     << " is " << directory[name] << endl;	
		}
		else
		{

			cout << " Sorry noi listing for " << name << endl;
		}

	}	

	return 0;
}	
	
	

