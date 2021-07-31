#include<iostream>
using namespace std;

//getbit

int getBit(int n, int pos)
{
	return ((n&(1<<pos))!= 0);
}


int main()
{
	int n = 5;				// 0101
	int position = 2;		//  |
	
	
	cout<<getBit(n, position)<<endl;
	
	
	return 0;
}
