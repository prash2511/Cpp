#include<iostream>
using namespace std;

//setbit

int setBit(int n, int pos)
{
	return((n|1<<pos));
	
}

int main()
{
	int n=3;
	int pos=2;
	
	cout<<setBit(n, pos)<<endl;
	
	return 0;
}
