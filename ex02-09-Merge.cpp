#include<iostream>
#include<cassert>
#include<cstring>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

using namespace std;

template <typename Container>
Container make(const char s[])
{
	return Container(&s[0], &s[strlen(s)]);
}

int main()
{	
	cout << "Demonstrating the generic merge algorithm with "
	      << " an array , a list and a deque" << endl;

	char s[] = "aeiou";
	int len = strlen(s);
	list<char> list1 = make< list<char>  >("bcdfghjklmnpqrstvwxyz");
	
	deque<char> deque1(26, 'x');

	//merge(&s[0], &s[len], list1.begin(), list1.end(), deque1.begin());
	merge(list1.begin(), list1.end() ,&s[0], &s[len],  deque1.begin());

	assert( deque1 == make< deque<char> >("abcdefghijklmnopqrstuvwxyz"));	

	cout << "---OK---" << endl;
	
	return 0;
}
