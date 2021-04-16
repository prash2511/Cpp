#include<iostream>

using namespace std;

int main()
{
	bool isFemale = true;
	bool isTall = false;
	
	if(isFemale && isTall)
	{
		cout<<"You are tall Female"<<endl;
	}
	else
	{
		if(isTall)
		{
			cout<<"You are tall but not female"<<endl;
		}
		else if(isFemale)
		{
			cout<<"You are female but not tall"<<endl;
		}
		
		else
		{
			cout<<"You are neither tall nor Female"<<endl;
		}
		
	}
	
/*	
	if(isFemale || isTall)
	{
		cout<<"You are tall Female"<<endl;
	}
	else
	{
		cout<<"You are not tall Female"<<endl;
	}
*/
	return 0;
}
