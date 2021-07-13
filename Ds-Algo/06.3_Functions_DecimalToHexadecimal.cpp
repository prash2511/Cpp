#include<bits/stdc++.h>
using namespace std;


string decimalToHexadecimal(int n)
{
	string ans = " ";
	int x = 1;
	int digit;
	
	while(x <= n)
	{
		x *= 16;
	}
	x /= 16;
	
	while(x > 0)
	{
		digit = n/x;
		n -= digit*x;
		x /= 16;
		
		if(digit <= 9)
		{
			ans = ans + to_string(digit);
		}
		else
		{
			char c = 'A' + digit - 10;
			ans.push_back(c);
		}
	}
	
	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<decimalToHexadecimal(n);
	
	
	return 0;
}
