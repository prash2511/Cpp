#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {10, 7, 4, 6, 8, 10, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int ans = 2;
	int pd = arr[1] - arr[0];
	
	int current = 2;
	int j = 2;
	
	while(j<n)
	{
		if(arr[j] - arr[j-1] == pd)
		{
			current += 1;
		}
		else
		{
			pd = arr[j] - arr[j-1];
			current = 2;
		}
		ans = max(ans, current);
		j += 1;
	}
	
	cout<<ans;
	
	return 0;
}
