#include<bits/stdc++.h>
using namespace std;


int kadane(int arr[], int n)
{
	int currSum = 0;
	int maxSum = INT_MIN;
	
	for(int i=0; i<n; i++)
	{
		currSum += arr[i];
		if(currSum < 0)
		{
			currSum = 0;
		}
		maxSum = max(maxSum, currSum);
	}
	
	return maxSum;
}


int main()
{
	int arr[] = {4, -4, 6, -6, 10, -11, 12};
	int n = sizeof(arr)/sizeof(arr[0]);
	int totalSum = 0;
	
	int nonWrapSum = kadane(arr, n);
	
	for(int i=0; i<n; i++)
	{
		totalSum += arr[i];
		arr[i] = -arr[i];
	}
	
	int wrapSum = totalSum + kadane(arr, n);
	
	
	cout<<max(wrapSum, nonWrapSum);
	
	return 0;
}
