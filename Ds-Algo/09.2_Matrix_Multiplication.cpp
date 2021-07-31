#include<iostream>
using namespace std;

int main()
{
	int m1[3][4] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
	int m2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};
	
	int ans[3][3];
	
	int n1 = 3;
	int n2 = 4;
	int n3 = 3;
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			ans[i][j] = 0;
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			for(int k=0; k<n2; k++)
			{
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cout<<ans[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
