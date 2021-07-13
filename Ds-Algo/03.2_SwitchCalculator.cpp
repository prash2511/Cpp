#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cout<<"A: ";
	cin>>a;
	cout<<"B: ";
	cin>>b;
	
	
	char op;
	cout<<"Enter Operator- Addition: +, Subtraction: -, Multiplication: *, Division: / - "<<endl;
	cin>>op;
	
	
	switch(op)
	{
		case '+':
			cout<<a+b<<endl;
			break;
			
		case '-':
			cout<<a-b<<endl;
			break;
			
		case '*':
			cout<<a*b<<endl;
			break;
			
		case '/':
			cout<<a/b<<endl;
			break;
			
		default:
			cout<<"Invalid Choice";
			
	}
	
	
	return 0;
}
