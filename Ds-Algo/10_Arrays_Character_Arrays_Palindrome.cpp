#include<iostream>
using namespace std;


bool arrPalindrome(char arr[], int n)
{
	bool check = 1;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i] != arr[n-1-i])
		{
			check = false;
			break;
		}
	}
	
	return check;
}


int main()
{
	int n;
	cin>>n;
	
	char arr[n+1];
	cin>>arr;
	
	bool ans = arrPalindrome(arr, n);
	
	if(ans == true)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	
	return 0;
}
