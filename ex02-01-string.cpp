#include<iostream>
#include<string>
#include<cassert>
#include<algorithm>
#include<cstring>

using namespace std;


int main()
{
	cout << "Using revese algorithm with a string" << endl;
	string string1 = "mark twain";

	reverse(string1.begin(), string1.end());

	assert(string1 == "niawt kram");
	if(string1 == "niawt kram")
	{
		cout << "Strings are equal" << endl;
	}
	cout << "----OK" << endl;


	cout << "Using reverse algorithm with an array" << endl;

	char array1[] = "mark twain";
	int N1 = strlen(array1);
	reverse(&array1[0],&array1[N1]);
	if(string(array1) == "niawt kram")
	{
		cout << "Strings are equal" << endl;
	}
	cout << "----OK" << endl;

	return 0;
}

