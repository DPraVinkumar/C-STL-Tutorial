#include<iostream>
#include<cstring>
#include<cassert>
#include<algorithm>

using namespace std;

int main()
{
	cout << "Demonstrating generic find algorithm with " << "an array."  << endl;
	char s[] = "C++ is a better C";
	int len = strlen(s);
	
	//Search for occurance of letter 'e'
	const char * where = find(&s[0], &s[len], 'e');

	cout << "*where = " << *where << endl;

	assert(*where == 'e' && *(where+1) == 't');
	cout << "---Ok---" << endl;

	return 0;
}

