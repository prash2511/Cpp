#include<iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int nums[] = {3, 5, 2, 7, 9};
	
	for(i = 1; i <= 10; i++)
	{
		cout<<i<<endl;
	}
	
	cout<<"Numbers in Array: "<<endl;
	
	for(j = 0; j < 5; j++)
	{
		cout<<nums[j]<<endl;
	}
	return 0;
}
