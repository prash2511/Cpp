#include<bits/stdc++.h>
using namespace std;


int selectionSort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		cout<<arr[i]<<" ";
	}
	
}


int main()
{
	int arr[] = {12, 45, 23, 52, 19, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr, n);
	
	
	return 0;
}
