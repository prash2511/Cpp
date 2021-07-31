#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {1, 5, 3, 4, 3, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	const int N = 1e5+2;
	int idx[N];
	
	for(int i=0; i<N; i++)
	{
		idx[i] = -1;
	}
	
	int min_ind = INT_MAX;
	
	for(int i=0; i<n; i++)
	{
		if(idx[arr[i]] != -1)
		{
			min_ind = min(min_ind, idx[arr[i]]);
		}
		else
		{
			idx[arr[i]] = i;
		}
	}
	
	if(min_ind == INT_MAX)
	{
		cout<<-1;
	}
	else
	{
		cout<<min_ind+1;
	}
			
	return 0;
}
