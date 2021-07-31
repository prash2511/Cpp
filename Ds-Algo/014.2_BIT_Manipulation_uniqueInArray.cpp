#include<iostream>
using namespace std;


int xorSum(int arr[], int n)
{
	int xorsum = 0;
	for(int i=0; i<n; i++)
	{
		xorsum = xorsum^arr[i];
	}
	return xorsum;
}


int main()
{
	int arr[9] = {2, 4, 1, 5, 3, 1, 2, 4, 3};
	
	cout<<xorSum(arr, 9)<<endl;
	
	return 0;
}
