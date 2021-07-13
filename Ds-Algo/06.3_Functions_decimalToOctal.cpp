#include<iostream>
using namespace std;

int decimalToOctal(int n)
{
	int ans = 0;
	int x = 1;
	
	while(x <= n)
	{
		x *= 8;
	}
	x /= 8;
	
	while(x > 0)
	{
		int rem = n / x;
		n -= rem * x;
		x /= 8;
		ans = ans*10 + rem;
	}
	
	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<decimalToOctal(n)<<endl;
	
	
	return 0;
}
