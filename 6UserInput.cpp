#include<iostream>

using namespace std;

int main()
{
	int age;
	string name;
	
	cout<<"Enter Your Name: ";
	getline(cin, name);
	cout<<"Enter Age: ";
	cin>>age;
	
	cout<<"Hello "<<name<<" You are "<<age<<" years old"<<endl;
}
