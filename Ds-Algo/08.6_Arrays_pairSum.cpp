#include<bits/stdc++.h>
using namespace std;


bool pairSum(int arr[], int n, int k)
{
	int i = 0;
	int j = n-1;
		
	while(i<j)
	{
		if(arr[i] + arr[j] == k)
		{
			return true;
		}
		else if(arr[i] + arr[j] > k)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 31;
	
	if(pairSum(arr, n, k) == true)
	{
		cout<<"Found";
	}
	else
	{
		cout<<"Not Found";
	}
}
