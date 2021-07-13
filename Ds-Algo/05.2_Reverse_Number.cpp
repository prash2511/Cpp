#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter N: ";
	cin>>n;
	
	int rem;
	int rev = 0;
	
	while(n > 0)
	{
		rem = n%10;
		n /= 10;
		rev = rev*10 + rem;
	}
	
	cout<<"Reverse N: "<<rev;
	
	return 0;
}
