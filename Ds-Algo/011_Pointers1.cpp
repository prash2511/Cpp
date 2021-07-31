#include<iostream>
using namespace std;

int main()
{
	int arr[] = {10, 20, 30};
	cout<<*arr<<endl;
	
	int n = sizeof(arr)/sizeof(arr[0]);
	int *ptr = arr;
	
	for(int i=0; i<n; i++)
	{
		cout<<*ptr<<endl;
		*ptr++;
	}
	
	return 0;
}
