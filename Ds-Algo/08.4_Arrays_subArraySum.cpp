#include<iostream>
using namespace std;

int main()
{
	int arr[5] = {1, 2, 0, 7, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=i; j<n; j++)
		{
			sum += arr[j];
			cout<<sum<<" ";
		}
	}	
	return 0;	
}
