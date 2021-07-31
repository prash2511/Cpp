#include<iostream>
using namespace std;


void spiralTraverse(int mat[5][6])
{
	int m = 5;
	int n = 6;
	int top = 0;
	int bottom = m-1;
	int left = 0;
	int right = n-1;
	
	int direction = 0;
	
	while(top<=bottom && left <= right)
	{
		if(direction == 0)
		{
			for(int i=left; i<=right; i++)
			{
				cout<<mat[top][i]<<" ";
			}
			top += 1;
		}
		else if(direction == 1)
		{
			for(int i=top; i<=bottom; i++)
			{
				cout<<mat[i][right]<<" ";
			}
			right -= 1;
		}
		else if(direction == 2)
		{
			for(int i=right; i>=left; i--)
			{
				cout<<mat[bottom][i]<<" ";
			}
			bottom -= 1;
		}
		else if(direction == 3)
		{
			for(int i=bottom; i>=top; i--)
			{
				cout<<mat[i][left]<<" ";
			}
			left += 1;
		}
		
		direction += 1;
		direction =  direction % 4;
	}
}



int main()
{
	int mat[5][6] = {
		{1, 5, 7, 9, 10, 11},
		{6, 10, 12, 13, 20, 21},
		{9, 25, 29, 30, 32, 41},
		{15, 55, 59, 63, 68, 70},
		{40, 70, 79, 81, 95, 105}
	};
	
	spiralTraverse(mat);
	
	
	return 0;
}
