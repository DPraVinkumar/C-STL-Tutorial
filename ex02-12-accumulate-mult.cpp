//g++ -o ex02-12-accumulate-mult  ex02-12-accumulate-mult.cpp -std=c++11
#include<iostream>
#include<vector>
#include<cassert>
#include<cstring>
#include<string>
#include<numeric> // for accumulate
#include<algorithm> // for accumulate

using namespace std;

int mult(int x, int y)
{
	return x * y;
}

int main()
{
	cout << "Demonstrating the accumulate function "<< endl;
	
	int x[5] = { 2, 3, 5, 7, 11};
	//initialize vector1 to x[0] through x[4]

	vector<int> vector1(&x[0], &x[5]);
	
	int sum = accumulate(vector1.begin(), vector1.end() ,1, mult);

	assert( sum = 2310);

	cout << "---OK---" << endl;	

	 vector<int> ivec(30);
	 iota(ivec.begin(), ivec.end(),1);
	 std::cout << "Contents of the vector: ";
    	 for(auto i: ivec) std::cout << i << ' ';
    	 std::cout << '\n';
	
	cout << "Factorial of 100 = " <<  accumulate(ivec.begin(), ivec.end() ,1, mult);


	return 0;
}


