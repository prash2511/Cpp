#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {1, 2, 0, 7, 2, 0, 2, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int ans = 0;
	
	int mx = INT_MIN;
	int i=0;
	
	while(i < n)
	{
		if(arr[i] > mx && arr[i] > arr[i+1])
		{
			ans += 1;
		}
		mx = max(mx, arr[i]);
		i += 1;
	}
	
	cout<<ans;
		
	return 0;
}
