#include<iostream>
using namespace std;


bool isPowerOfTwo(int n)
{
	return (n && !(n & n-1));
}


int main()
{
	int n=16;
	
	cout<<isPowerOfTwo(n)<<endl;
	
	
	return 0;
}
