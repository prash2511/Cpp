#include<iostream>
using namespace std;


int main()
{
	int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 7, 2}};
	int k = 8;
	int m = 4;
	int n = 3;
	bool flag = 0;
		
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(mat[i][j] == k)
			{
				flag = 1;
				cout<<"Found at "<<i<<" "<<j;
				break;
			}
		}
	}
	
	if(flag == 0)
	{
		cout<<"Not Found";
	}
	
	
	
	return 0;
}
