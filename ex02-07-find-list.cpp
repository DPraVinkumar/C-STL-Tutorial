#include<iostream>
#include<list>
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
	cout << "Demonstrating generic find algorith with a list" << endl;
	list<char> list1 = make< list<char> > ("C++ is a better C");
	
	list<char>::iterator where = find(list1.begin(), list1.end(), 'e');

	list<char>::iterator next = where;
	++next;
		
	assert( *where == 'e' && *next == 't');
	cout << "---OK---" << endl;
	  
	
 
	return 0;
}
