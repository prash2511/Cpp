#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {-1, 4, 7, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a[n];
	int maxSum = INT_MIN;
	int currSum = 0;
	
	for(int i=0; i<n; i++)
	{
		currSum += arr[i];
		if(currSum < 0)
		{
			currSum = 0;
		}
		maxSum = max(maxSum, currSum);
	}
	
	
	cout<<maxSum;
	
	return 0;
}
