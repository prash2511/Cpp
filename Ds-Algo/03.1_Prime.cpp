#include<iostream>

using namespace std;

int main()
{
	
	int i, num;
	cin>>num;
	
	for(i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			break;
		}
	}
	if(i == num)
		{
			cout<<num<<" is prime"<<endl;
		}
		
	return 0;	
}
