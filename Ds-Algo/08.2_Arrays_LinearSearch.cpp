#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int k)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == k)
		{
			return true;
		}
	}
	return false;
}


int main()
{	
	int arr[] = {12, 18, 20, 42, 8, 10};
	int k = 8;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(linearSearch(arr, n, k) == true)
	{
		cout<<"Found";
	}
	else
	{
		cout<<"Not Found";
	}
		
	return 0;
}
