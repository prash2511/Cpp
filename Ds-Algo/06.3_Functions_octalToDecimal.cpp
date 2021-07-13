#include<iostream>
using namespace std;

int octalToDecimal(int n)
{
	int ans = 0;
	int x = 1;
	
	while(n>0)
	{
		int digit = n%10;
		ans = ans + (digit*x);
		x *= 8;
		n /= 10;
	}
	
	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<octalToDecimal(n)<<endl;
	
	
	return 0;
}
