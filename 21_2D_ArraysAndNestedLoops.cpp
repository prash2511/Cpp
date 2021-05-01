#include<iostream>
using namespace std;

int main()
{
	int numberGrid[3][3] = 
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	cout<<numberGrid[1][1]<<endl;
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<numberGrid[i][j];
		}
		cout<<endl;
	}
	

	return 0;
}
