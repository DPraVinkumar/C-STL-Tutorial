//g++ -o ex02-14-accumulate-mult-multiplies  ex02-14-accumulate-mult-multiplies.cpp  -std=c++11
#include<iostream>
#include<vector>
#include<cassert>
#include<cstring>
#include<string>
#include<numeric> // for accumulate
#include<algorithm> // for accumulate

using namespace std;

class multiply
{
	public:
		int operator()(int x, int y)
		{
			return x * y;
		}
};

int main()
{
	cout << "Demonstrating the accumulate function "<< endl;
	
	int x[5] = { 2, 3, 5, 7, 11};
	//initialize vector1 to x[0] through x[4]

	vector<int> vector1(&x[0], &x[5]);
	
	int sum = accumulate(vector1.begin(), vector1.end() ,1, multiply());

	assert( sum = 2310);

	cout << "---OK---" << endl;	

	return 0;
}


