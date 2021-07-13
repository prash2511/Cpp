#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
	int start = 0;
	int end = n-1;
	
	while(start <= end)
	{
		int mid = (start+end)/2;
		
		if(arr[mid] == k)
		{
			return mid;
		}
		else if(arr[mid] > k)
		{
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}
	
	return -1;
	
}


int main()
{	
	int arr[] = {8, 10, 12, 18, 20, 42};
	int k = 20;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<binarySearch(arr, n, k);
		
	return 0;
}
