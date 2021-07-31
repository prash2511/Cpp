#include<iostream>
using namespace std;


int main()
{
	int s = 12;
	int arr[] = {1, 2, 3, 7, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int i=0;
	int j=0;
	int st = -1;
	int en = -1;
	int sum = 0;
	
	while(j < n && sum+arr[j] <= s)
	{
		sum += arr[j];
		j++;
	}
	if(sum == s)
	{
		cout<<i+1<<" "<<j+1<<endl;
		return 0;
	}
	
	while(j < n)
	{
		sum += arr[j];
		while(sum > s)
		{
			sum -= arr[i];
			i+=1;
		}
		if(sum == s)
		{
			st = i+1;
			en = j+1;
			break;
		}
		
		j++;
	}
	
	cout<<st<<" "<<en<<endl;
	
	return 0;
}
