#include<iostream>
using namespace std;


int naturalSum(int n)
{
	int ans = 0;
	
	for(int i=1; i<=n; i++)
	{
		ans = ans + i;
	}

	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<naturalSum(n);
	
	
	return 0;
}
