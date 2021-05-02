#include<iostream>
using namespace std;

class Chef													// super class
{
	public:
		void makeChicken()
		{
			cout<<"The chef makes chicken"<<endl;
		}
		
		void makeSalad()
		{
			cout<<"The chef makes salad"<<endl;
		}
		
		void makeSpecialDish()
		{
			cout<<"The chef makes bbq ribs"<<endl;
		}
		
};


class ItalianChef : public Chef								//Inheritance --- sub class
{
	public:
		void makePasta()
		{
			cout<<"The Italian chef makes pasta"<<endl;
		}
		
		void makeSpecialDish()								//Overriding
		{
			cout<<"The chef makes chicken parm"<<endl;
		}
};


int main()
{
	Chef chef;
	chef.makeChicken();
	chef.makeSpecialDish();
	
	ItalianChef italianChef;
	italianChef.makeChicken();
	italianChef.makePasta();
	italianChef.makeSpecialDish();
	
	
	return 0;
}
