#include<iostream>
#include<vector>
#include<cassert>
#include<cstring>
#include<string>
#include<numeric> // for accumulate
#include<algorithm> // for accumulate
#include<functional> // for accumulate

using namespace std;


int main()
{
	cout << "Demonstrating the accumulate function "<< endl;
	
	int x[5] = { 2, 3, 5, 7, 11};
	//initialize vector1 to x[0] through x[4]

	vector<int> vector1(&x[0], &x[5]);
	
	int sum = accumulate(vector1.begin(), vector1.end() ,1, multiplies<int>());

	assert( sum = 2310);

	cout << "---OK---" << endl;	

	 vector<int> ivec(100);
	 iota(ivec.begin(), ivec.end(),1);
	 std::cout << "Contents of the vector: ";
    	 for(auto i: ivec) std::cout << i << ' ';
    	 std::cout << '\n';
	
	cout << "Factorial of 100 = " <<  accumulate(ivec.begin(), ivec.end() ,1, multiplies<int>());
	return 0;
}


