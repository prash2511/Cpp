#include<iostream>
using namespace std;

int main()
{
	int mat[4][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}, {10, 13, 14, 17}};
	int k = 13;
	
	int m = 4;
	int n = 4;
	
	int i = 0;
	int j = n-1;
	
	bool flag = 0;
	
	while(i < m || j >= 0)
	{
		if(k == mat[i][j])
		{
			flag = 1;
			cout<<"Found";
			break;
		}
		else if(k < mat[i][j])
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	if(flag == 0)
	{
		cout<<"Not Found";
	}	
	
	return 0;
}
