#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int i, j, k;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		
		k = i;
		for(; j<=n; j++)
		{
			cout<<k--;
		}
		
		k = 2;
		for(j=2; j<=i; j++)
		{
			cout<<k++;
		}
		
		cout<<endl;
	}
	
	
	return 0;
}
