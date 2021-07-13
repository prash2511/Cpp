#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
	int ans = 0;
	int x = 1;
	
	while(x <= n)
	{
		x *= 2;
	}
	x /= 2;
	
	while(x > 0)
	{
		int rem = n / x;
		n -= rem * x;
		x /= 2;
		ans = ans*10 + rem;
	}
	
	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<decimalToBinary(n)<<endl;
	
	
	return 0;
}
