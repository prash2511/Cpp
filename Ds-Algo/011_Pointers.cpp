#include<iostream>
using namespace std;

int increment(int *a)
{
	a++;
}


int main()
{
	int a = 10;
	
	int *aptr;
	
	aptr = &a;
	
	cout<<&a<<endl;
	cout<<aptr<<endl;
	cout<<*aptr<<endl;
	
	*aptr = 20;
	cout<<*aptr<<endl;
	
	aptr++;
	cout<<aptr<<endl;
}
