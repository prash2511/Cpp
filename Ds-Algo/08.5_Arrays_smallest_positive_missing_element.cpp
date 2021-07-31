#include<iostream>
using namespace std;

int main()
{
	int arr[] = {0, -9, 1, 3, -4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	const int N = 1e5+2;
	bool idx[N];
	int ans = -1;
	
	for(int i=0; i<N; i++)
	{
		idx[i] = false;
	}
	
	for(int i=0; i<n; i++)
	{
		if(arr[i] >= 0)
		{
			idx[arr[i]] = true;
		}
	}	
	
	for(int i=1; i<N; i++)
	{
		if(idx[i] == false)
		{
			ans = i;
			break;
		}
	}
	
	cout<<ans;
	
	return 0;
}
