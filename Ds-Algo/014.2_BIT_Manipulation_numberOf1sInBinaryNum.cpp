#include<iostream>
using namespace std;


int numberOf1s(int n)
{
	int count = 0;
	while(n != 0)
	{
		n = n & (n-1);
		count += 1;
	}
	return count;
}


int main()
{
	int n=19;
	
	cout<<numberOf1s(n)<<endl;
	
	
	return 0;
}
