#include<iostream>

using namespace std;

int main()
{
	int day;
	int pocketMoney = 3000;
	
	for(day = 1; day<30; day++)
	{
		if(pocketMoney == 0)
		{
			break;
		}
		
		else if(day % 2 == 0)
		{
			pocketMoney -= 300;
			cout<<"Date: "<<day<<" You can go out"<<endl;
		}
		else
		{
			continue;
		}
	}
}
