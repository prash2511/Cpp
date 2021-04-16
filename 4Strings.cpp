#include<iostream>

using namespace std;

int main()
{
	string prash = "My name is Prashant";
	
	cout<<prash<<endl;
	cout<<"Length is "<<prash.length()<<endl;
	cout<<prash[11]<<endl;
	
	prash[0] = 'B';
	
	cout<<prash<<endl;
	
	cout<<prash.find("Prashant", 0)<<endl;
	cout<<prash.substr(8, 4)<<endl;
	
	return 0;
}
