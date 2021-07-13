#include<iostream>
using namespace std;


int naturalSum(int n)
{
	int ans = 0;
	
	ans = (n * (n+1))/ 2;

	return ans;
}


int main()
{
	int n;
	cin>>n;
	
	cout<<naturalSum(n);
	
	
	return 0;
}
