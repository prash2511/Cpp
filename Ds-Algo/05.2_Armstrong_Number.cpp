#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter Num: ";
	cin>>num;
	int n = num;
	
	int arm = 0;
	
	while(num > 0)
	{
		int digit = num%10;
		num /= 10;
		arm = arm + (digit*digit*digit);
	}
	
	if(arm == n)
	{
		cout<<"Number is Armstrong";
	}
	else
	{
		cout<<"Number is not Armstrong";
	}
	
	
	return 0;
}
