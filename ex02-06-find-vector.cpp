#include<iostream>
#include<vector>
#include<cstring>
#include<cassert>
#include<algorithm>

using namespace std;

template <typename Container>
Container make(const char s[])
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{
	cout << "Demonstrating generic find algorith with a vector " << endl;
	vector<char> vector1 = make< vector<char> > ("C++ is a better C");
	
	vector<char>::iterator where = find(vector1.begin(), vector1.end(), 'e');
	
	assert( *where == 'e' && *(where + 1) == 't');

	cout << "---OK---" << endl;
	  
	
 
	return 0;
}
