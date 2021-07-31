#include<iostream>
using namespace std;


void matrixTranspose(int mat[5][5], int n)
{	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			int temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int mat[5][5] = {
		{1, 5, 7, 9, 10},
		{6, 10, 12, 13, 20},
		{9, 25, 29, 30, 32},
		{15, 55, 59, 63, 68},
		{40, 70, 79, 81, 95}
	};
	
	int n = 5;
	
	matrixTranspose(mat, n);
	
	
	return 0;
}
