#include<iostream>

using namespace std;

int main()
{
	int a, b;
	
	char op;
	
	int ans = 0;
	
	cout<<"Enter first number: ";
	cin>>a;
	
	cout<<"Enter operator: ";
	cin>>op;
	
	cout<<"Enter second number: ";
	cin>>b;
	
	if(op == '+')
	{
		ans = a + b;
	}
	
	else if(op == '-')
	{
		ans = a - b;
	}
	
	else if(op == '*')
	{
		ans = a * b;
	}
	
	else if(op == '/')
	{
		ans = a / b;
	}
	
	else
	{
		cout<<"Wrong Opeartor"<<endl;
	}
	
	cout<<"Result: "<<ans;
	return 0;
}
