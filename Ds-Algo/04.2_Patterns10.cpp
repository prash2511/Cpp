#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Num: ";
	cin>>num;
	
	int i, j;
	
	for(i=num; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
