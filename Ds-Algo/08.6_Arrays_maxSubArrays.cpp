#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {-1, 4, 7, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			for(int k=i; k<=j; k++)
			{
				cout<<arr[k]<<"  ";
			}
			cout<<endl;
		}
	}
	
	
	return 0;
}
