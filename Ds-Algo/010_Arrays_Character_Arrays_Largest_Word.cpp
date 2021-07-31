#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	cin.ignore();
	
	char arr[n+1];
	cin.getline(arr, n);
	cin.ignore();
	
	int largest = 0;
	int count = 0;
	int i = 0;
	int st = 0;
	int maxst = 0;
	
	while(1)
	{
		if(arr[i] == ' ' || arr[i] == '\0')
		{
			if(count > largest)
			{
				largest = count;
				maxst = st;
			}
			count = 0;
			st = i+1;
		}
		else
		{
			count += 1;
		}
				
		if(arr[i] == '\0')
		{
			break;
		}
				
		i++;
	}
	
	cout<<largest<<endl;
	for(int i=0; i<largest; i++)
	{
		cout<<arr[i+maxst];
	}
		
	return 0;
}
