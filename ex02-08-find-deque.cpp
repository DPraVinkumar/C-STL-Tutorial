#include<iostream>
#include<deque>
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
	cout << "Demonstrating generic find algorith with a deque" << endl;
	deque<char> deque1 = make< deque<char> > ("C++ is a better C");
	
	deque<char>::iterator where = find(deque1.begin(), deque1.end(), 'e');

	assert( *where == 'e' && *(where + 1) == 't');
	cout << "---OK---" << endl;
	  
	
 
	return 0;
}
