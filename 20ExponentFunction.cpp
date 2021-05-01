#include<iostream>
using namespace std;


int power(int baseNum, int powNum)
{
	int result = 1;
	
	for(int i = 0; i < powNum; i++)
	{
		result = result * baseNum;
	}
	
	return result;
}


int main()
{
	int a,b;
	
	cout<<"Enter base number: ";
	cin>>a;

	cout<<"Enter power number: ";
	cin>>b;
	
	int result = power(a,b);
	cout<<"Result: "<<result;
	
	return 0;
}
