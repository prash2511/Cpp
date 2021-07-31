#include<iostream>
using namespace std;

//clearBit

int clearBit(int n, int pos)
{
	int mask = ~(1<<pos);
	return(n&mask);
	
}

int main()
{
	int n=7;
	int pos=2;
	
	cout<<clearBit(n, pos)<<endl;
	
	return 0;
}
