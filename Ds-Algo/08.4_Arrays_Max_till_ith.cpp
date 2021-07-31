#include<iostream>
using namespace std;

int main()
{
	int arr[6] = {0, -9, 1, 6, -4, 8};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int mx = arr[0];
	
	for(int j=0; j<n; j++)
	{
		mx = max(mx, arr[j]);
		cout<<mx<<endl;
	}
	
	return 0;
}
