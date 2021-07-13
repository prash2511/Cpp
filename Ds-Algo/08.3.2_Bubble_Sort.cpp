#include<bits/stdc++.h>
using namespace std;


int bubbleSort(int arr[], int n)
{
	int counter = 1;
	int i;
	
	while(counter < n)
	{
		for(i=0; i<n-counter; i++)
		{
			if(arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter += 1;
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
	
	bubbleSort(arr, n);
	
	
	return 0;
}
