#include<iostream>
using namespace std;


//updateBit

int updateBit(int n, int pos, int value)
{
	int mask = ~(1<<pos);
	n = n&mask;
	
	return(n|(value<<pos));
}

int main()
{
	int n=5;			//0001
	int pos=1;			//  |
	int value=1;		//0111
	
	cout<<updateBit(n, pos, value)<<endl;
	
	return 0;
}
