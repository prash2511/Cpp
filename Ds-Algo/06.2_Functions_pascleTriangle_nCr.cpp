#include<iostream>
using namespace std;


int factorial(int n)
{
	int fact = 1;
	
	for(int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	
	return fact;
}


int main()
{
	int n;
	cin>>n;
	
	int i, j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<<factorial(i) / (factorial(i-j) * factorial(j))<<" ";
		}
		cout<<endl;
	}
	
		
	return 0;
}
