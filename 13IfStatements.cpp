#include<iostream>

using namespace std;


int getMax(int a, int b, int c)
{
	if(a > b)
	{
		if(a > c)
		{
			return a;
		}
	}
	else
	{
		if(b > c)
		{
			return b;
		}
		
		else
		{
			return c;
		}
	}
}


int getMin(int a, int b, int c)
{
	if(a < b && a < c)
	{
		return a;
	}
	else if(b < a && b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}


int main()
{
	
	cout<<getMax(7, 4, 5)<<endl;
	cout<<getMin(7, 4, 5);
	
	return 0;
}
