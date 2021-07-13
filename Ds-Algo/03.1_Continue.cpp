#include<iostream>

using namespace std;

int main()
{
	int day;
	
	for(day = 1; day<30; day++)
	{
		if(day % 2 == 0)
		{
			cout<<"Date: "<<day<<" You can go out"<<endl;
		}
		else
		{
			continue;
		}
	}
}
