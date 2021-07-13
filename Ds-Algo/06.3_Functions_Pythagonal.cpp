#include<iostream>
using namespace std;

bool pyth(int a, int b, int c)
{
	if(a>b && a>c)
	{
		if((a*a) == (b*b) + (c*c))
		{
			return true;
		}
		return false;
	}
	
	else if(b>c && b>a)
	{
		if((b*b) == (a*a) + (c*c))
		{
			return true;
		}
		return false;
		
	}
	
	else if(c>b && c>a)
	{
		if((c*c) == (b*b) + (a*a))
		{
			return true;
		}
		return false;
		
	}
	
	return false;
}

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	
	if(pyth(a, b, c) == true)
	{
		cout<<"Pythagorean Triplet";
	}
	else
	{
		cout<<"Not Pythagorean Triplet";
	}
	
	return 0;
}
