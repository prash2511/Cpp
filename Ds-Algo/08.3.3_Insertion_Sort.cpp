#include<bits/stdc++.h>
using namespace std;


int insertionSort(int arr[], int n)
{
	int i, j;
	
	for(i=1; i<n; i++)
	{
		int current = arr[i];
		j = i-1;
		
		while(arr[j] > current && j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}


int main()
{
	int arr[] = {12, 45, 23, 52, 19, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr, n);
	
	
	return 0;
}
