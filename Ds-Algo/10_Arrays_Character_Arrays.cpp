#include<iostream>
using namespace std;

int main()
{
	int n = 6;
	char arr[n+1] = "apple";
	
	int i = 0;
	while(arr[i] != '\0')
	{
		cout<<arr[i]<<"";
		i++;
	}
	
	
	return 0;
}
